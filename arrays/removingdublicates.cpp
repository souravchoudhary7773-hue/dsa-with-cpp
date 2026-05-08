#include<iostream> 
using namespace std;

//require extra space..
void duplicateRemove(int arr[],int size){
    int temp[size];
    temp[0]= arr[0];
    int count = 1 ;
    for(int i = 0; i<size;i++){
        if(arr[i]!=temp[count-1]){
            temp[count]= arr[i];
            count++;
        }
    }
for(int i = 0; i<count; i++){
    cout<<temp[i]<<" ";
}
}
// adjusting within arr
void ducRemove(int arr[],int size){
    int res = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
        
    }
    for (int i = 0; i < res; i++)
    {
       cout<<arr[i]<<" ";
    }
    

}


int main(){
    int arr[] = {1,1,2,3,3,3,4,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    duplicateRemove(arr,size);
    cout<<endl;
    ducRemove(arr,size);
    return 0;
}