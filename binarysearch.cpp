#include <iostream>
using namespace std;
int binarySearch(int arr[],int target, int size){
    int low = 0;
    int high = size -1;
    while(high>=low){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            return 1;
        }else if(arr[mid]>target){
            high = mid-1 ;
        }else{
            low = mid +1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 11;
    int size =  sizeof(arr)/sizeof(arr[0]);
    int res = binarySearch(arr,target,size);
    if(res==1){
        cout<<"target is present.";
    }else{
        cout<<"not present.";
    }
    return 0;

}