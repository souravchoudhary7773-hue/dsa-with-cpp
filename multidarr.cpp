#include <iostream>
using namespace std;

int main(){
    int m = 3 , n = 2;
    // first way
    int **arr;
    arr = new int *[m];

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int [n];
    }

    for (int i = 0; i < m; i++)
    {
        for(int j =0; j<n ; j++){
            arr[i][j]=10;
            cout<<arr[i][j]<<"  ";

        }
    }
    
    // seond way

    int *arr2[m] ;
    for (int i = 0; i < m; i++)
    {
        arr2[i] = new int [n];
    }
    for (int i = 0; i < m; i++)
    {
        for(int j =0; j<n ; j++){
            arr2[i][j]=20;
            cout<<arr2[i][j]<<"  ";

        }
    }

  // third way

   vector<int> arr3[m];
    for (int i = 0; i < m; i++)
    {
        for(int j =0; j<n ; j++){
            arr3[i].push_back(30);
            cout<<arr3[i][j]<<"  ";

        }
    }
    // fourth way

    vector<vector<int>> arr4;
    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back(40);
        }

        arr4.push_back(v);
        
    }
    for (int i = 0; i < arr4.size(); i++)
    {
        for(int j =0; j<arr4[i].size() ; j++){
            cout<<arr4[i][j]<<"  ";

        }
    }
    

    return 0;
}