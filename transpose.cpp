#include <iostream>
#include <vector>
using namespace std;

int transpose(vector<vector<int>>&arr){
    int r = arr.size();
    int c = arr[0].size();
    vector<vector<int>> temp(r, vector<int>(c));
    if(r!=c){ return -1;}
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            temp[j][i] = arr[i][j];
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

int swaptranspose(vector<vector<int>>&arr){
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
 return 0;
}

int main(){
    vector<vector<int>>arr = {{1,2,3},{4,5,6},{7,8,9}};
    transpose(arr);
    swaptranspose(arr);
    return 0;
}