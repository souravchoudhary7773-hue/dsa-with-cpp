#include <iostream>
using namespace std;

bool checksort(int arr[],int size){
    for(int i = 0; i<size; i++){
        for (int j = i+1;  j< size; j++)
        {
            if (arr[j]<arr[i])
            {
              return false;
            }
            
        }
        
    }
    return true;
}

bool isorted(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}






int main(){
    int arr[] = { 1,2,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<checksort(arr,size)<<endl;
    cout<<isorted(arr,size)<<endl;
   

    return 0;
}