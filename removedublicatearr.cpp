#include <iostream>
using namespace std;

// it is given that the arr is sorted..
// need space bigO(n)
int removeduc(int arr[],int size){
    int temp[size];
    temp[0] = arr[0];
    int idx = 0;
    for(int i  = 0; i<size ;i++){
        if(arr[i]!= arr[i+1]){
            temp[idx] = arr[i];
            idx++;
        }else{
            continue;
        }
    }
    for (int i = 0; i < idx; i++)
    {
        arr[i]=temp[i];
    }
    return idx;

}

// without bigO(n) space
int removedublicate(int arr[],int size){
    if (size == 0)
    {return -1;
    }
    
    int res = 1;
    for (int i = 0; i < size; i++)
    {
        if(arr[res-1]!=arr[i]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}


void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[] = { 1,2,2,2,3,5,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // int n = removeduc(arr,size);
    int a = removedublicate(arr,size);
    // print(arr,n);
    print(arr,a);
    return 0;
}