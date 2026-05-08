#include <iostream>
using namespace std;
int search(int arr[],int target, int size){
    for(int i = 0; i<size; i++){
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    int index = search(arr,target,size);
    cout<<index;

}