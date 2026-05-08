#include <iostream>
using namespace std;
// nive soln
void zero(int arr[], int size)
{
    int count = 0;
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            temp[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << temp[i] << " ";
    }
}

// optimal soln
void zeroRemove(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
}
// using swap function nive soln
void zeroswap(int arr[],int size){
    for(int i = 0; i<size;i++){
        if(arr[i]==0){
            for(int j = i+1; j<size; j++){
                if (arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                    break;
                }
                
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// optimal using swap fun..
void zeroswapo(int arr[], int size){
    for (int i = 0; i <size; i++)
    {
        /* code */
    }
    




}
int main()
{
    int arr[] = {0, 1, 0, 2, 3, 4, 0, 0, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    zeroswap(arr, size);
    return 0;
}
