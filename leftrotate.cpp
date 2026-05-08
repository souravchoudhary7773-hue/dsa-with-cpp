#include <iostream>
using namespace std;

void fun(int arr[],int size){
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size-1] = temp;
    
}

void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[] = { 1,2,2,2,3,0,0,5,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    fun(arr,size);
    print(arr,size);
    return 0;
}