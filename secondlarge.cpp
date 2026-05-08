#include <iostream>
using namespace std;

// time comp is n..
int maxIndex(int arr[], int size){
    int maxidx = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>arr[maxidx]){
            maxidx = i;
        }
    }
    
    return maxidx;
}

int secmaxIndex(int arr[],int size){
    int largest = maxIndex(arr,size);
    int res = -1;
    for(int i = 0; i<size; i++){
        if(arr[i]!=arr[largest]){
            if(res == -1){
                res = i;
            }else if(arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return res;
}

// single loop way of finding second largest..
int secondlarge(int arr[],int size){
    int largest = 0;
    int second = -1;
    for(int i =0; i <size; i++){
        if(arr[i]>arr[largest]){
            second = largest;
            largest = i;
        }else if(arr[i] != arr[largest]){
            if(second==-1 || arr[i]>arr[second]){
                second = i;
            }
        }
    }
    return second;
}

int main(){
    int arr[] = { 1,2,3,7,4,9,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<secmaxIndex(arr,size)<<endl;
    cout<<secondlarge(arr,size)<<endl;

    return 0;
}