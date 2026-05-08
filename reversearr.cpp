#include <iostream>
using namespace std;

void reverse(int arr[], int size){
    int low = 0;
    int high = size -1;
    for(int i = 0; i < size ; i++){
        if(low<=high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
        }else{
            break;
        }

    }
}
void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[] = { 1,2,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
    print(arr,size);
    return 0;
}