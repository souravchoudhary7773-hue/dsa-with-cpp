#include <iostream>
#include <vector>
using namespace std;

void snakeprint(vector<vector<int>>arr){
    int r = arr.size();
    int c = arr[0].size();
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if((i&1 )== 0){
                cout<<arr[i][j]<<" ";
            }else{
                cout<<arr[i][c-j-1]<<" ";
            }
        }
        
    }
    

}

int main(){
    vector<vector<int>>arr = {{1,2,3},{4,5,6},{7,8,9}};
    snakeprint(arr);
}