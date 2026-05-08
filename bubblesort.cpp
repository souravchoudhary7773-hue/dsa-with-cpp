#include <iostream>
using namespace std;
void bubbleSort(int arr[],int size){
    int i,j;
    for(i=0;i<size; i++){
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printArr(int arr[],int size){
    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,4,3,6,5,7,9,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    cout<<"your sorted arry is -> ";
    printArr(arr,size);
}
