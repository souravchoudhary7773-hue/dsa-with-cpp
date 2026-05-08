#include <iostream>
#include <vector>
using namespace std;

int rotate(vector<vector<int>>&arr){
    int r = arr.size();
    int c = arr[0].size();
    vector<vector<int>> temp(r, vector<int>(c));
    if(r!=c){ return -1;}
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            temp[r-j-1][i] = arr[i][j];
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = temp[i][j];
        }
        
    }
    return 0;

}

int swaprotate(vector<vector<int>>&arr){
    int r = arr.size();
    int c = arr[0].size();

    if(r!=c){ return -1;}

    for (int i = 0; i < r; i++)
    {
        for (int j = i+1; j < c; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        
    }
    for (int i = 0; i < c; i++)
    {
        int low = 0;
        int high = c-1;
        while(low<high){
            swap(arr[low][i], arr[high][i]);
            low++;
            high--;
        }
    }
    
 return 0;
}

int main(){
    vector<vector<int>>arr = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(arr);
    return 0;
}