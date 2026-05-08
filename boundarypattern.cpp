#include <iostream>
#include <vector>
using namespace std;

void snakeprint(vector<vector<int>> arr)
{
    int r = arr.size();
    int c = arr[0].size();
    for (int i = 0; i < r; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < c; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else if((i>0)&&(i<r-1))
        {
            cout << arr[i][c - 1] << " ";
        }
        else if (i == r - 1)
        {
            for (int j = 0; j < c; j++)
            {
                cout << arr[i][c - j - 1] << " ";
            }
        }
    }
    for (int i = r-2; i >0; i--)
    {
       cout<<arr[i][0]<<" ";
    }
    
}

void print(vector<vector<int>>arr){
    int r = arr.size();
    int c = arr[0].size();
    if(r == 1){
        for (int i = 0; i < c; i++)
        {
            cout<<arr[0][i]<<"";
        }
        
    }
    else if(c == 1){
        for (int i = 0; i < c; i++)
        {
            cout<<arr[i][0]<<"";
        }
        
    }else{
        for (int j = 0; j < c; j++)
            {
                cout << arr[0][j] << " ";
            }
        for (int j = 0; j < r-2; j++)
            {
                cout << arr[j+1][c-1] << " ";
            }
        for (int j = c-1; j >=0; j--)
            {
                cout << arr[r-1][j] << " ";
            }
        for (int j = r-2; j >0; j--)
            {
                cout << arr[j][0] << " ";
            }
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9},{7, 8, 9},{7, 8, 9}};
    snakeprint(arr);
    cout<<endl;
    print(arr);
    return 0;
}