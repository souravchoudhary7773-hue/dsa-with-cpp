#include <iostream>
using namespace std;
void selectionSort(int arr[],int size){
    int minidx;
    for(int i =0; i<size; i++){
        minidx = i;
        for(int j = i +1; j<size; j++){
            if(arr[minidx]>arr[j]){
                minidx = j;
            }
        }
        if(i!=minidx){
            int temp = arr[i];
            arr[i] = arr[minidx];
            arr[minidx] = temp;
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
    selectionSort(arr,size);
    cout<<"your sorted arry is -> ";
    printArr(arr,size);
}