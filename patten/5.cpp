#include<iostream>
using namespace std;


int main(){
    cout<<"enter value of n ->";
    int n;
    cin>>n;

    int i =1;
    while(n>=i){
        int j = n-i+1;
        while(n>=j){
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}