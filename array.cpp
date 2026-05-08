#include <iostream>
using namespace std;

// why we use vector over array-> 
// 1. dynamic size.
// 2. reach library to insert, delete, find etc.
// 3. easy to find size of by vect.size()
// 4. no need to give size first.
// 5. use as function return type.
// 6. by default initialize with default value.
// 7. ease of copy into other veriable. v1 = v2;


// linear search in an fixed size array ->
// time complexity is n.
int find(int arr[],int size , int target){
    for(int i = 0; i<size ; i++){
        if(target == arr[i]){
            return i;

        }
    }
    return -1;
}

// insert element at nth position ->
// time complexity is n.
int insert(int arr[],int cap,int position, int num , int size){
    if(cap < position ) return -1;
    int idx = position -1;
    for(int i = size-1; i >= idx; i--){
        arr[i+1]=arr[i];
    }
    arr[idx]= num;
    return 1;
}

// deleting element form nth position.
// time complexity is n.
void del(int arr[],int size, int position){
    int idx = position - 1;
    for(int i = idx ; i<size; i++){
        arr[i] = arr[i+1];
    }

}

// deleting element pass by value ->
int remove(int arr[],int val, int size){
    int idx;
    for(int i = 0; i<size ; i++){
        if(val == arr[i]){
            idx = i;
            break;
        }else{
            return -1;
        }
    }
    for(int i = idx;i<size; i++){
        arr[i]= arr[i+1];
    }
    return 1;
}


int main(){
//1- fixed size array declearing --->
//stack allocation
int arr[]={1,2,3,4,5,6};
int arr1[5];
int n;
int arr2[n];
int *arr3 = new int[5]; // heap allocation

//2- dynamic size array in cpp
vector<int> vect = {1,2,3,4};
vector<int> vect1;



return 0;
}