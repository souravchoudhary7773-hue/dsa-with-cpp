#include <iostream>
using namespace std;
void insertionSort(int arr[],int size){
    for(int i = 0; i<size; i++){
        int key = arr[i];
        int j = i -1;
        
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = key;
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
    insertionSort(arr,size);
    cout<<"your sorted arry is -> ";
    printArr(arr,size);
}