#include <iostream>
using namespace std;
void fun(int arr[],int target,int n){
    for(int i =0;i<n; i++){
        if(arr[i]==target){
            cout<<"element position is ->"<<(i+1);
            break;
        }
    }
}

int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 3;
    fun(arr,target,n);
    return 0;
}