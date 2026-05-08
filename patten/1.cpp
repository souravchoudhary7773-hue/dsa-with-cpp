#include<iostream>
using namespace std;


int main(){
    cout<<"enter value of n ->";
    int n;
    cin>>n;

    int i =1;
    while(n>=i){
        int j = 1;
        while(n>=j){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}