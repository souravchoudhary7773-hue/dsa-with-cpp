#include <iostream>
using namespace std;

// time com is (n)sqr...

int getLarger(int arr[],int size){
    for(int i = 0; i<size ; i++){
        bool flag = true;
        for(int j =0; j<size; j++){
            if(arr[j]>arr[i]){
                flag = false;
                break;
            }

        }
        if(flag== true){
            return i;
        }
    }
    return -1;
}

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

int main(){
    int arr[] = { 1,2,3,7,4,9,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<getLarger(arr,size)<<endl;
    cout<<maxIndex(arr,size)<<endl;

    return 0;
}