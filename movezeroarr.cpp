#include <iostream>
using namespace std;

// take time bigO(n2)
void fun(int arr[],int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0){
            for(int j = i+1; j <size; j++){
                if(arr[j]!= 0){
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
    
}

// take time bigO(n)

void fun1(int arr[],int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
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
    int arr[] = { 1,2,2,2,3,0,0,5,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    fun1(arr,size);
    print(arr,size);
    return 0;
}