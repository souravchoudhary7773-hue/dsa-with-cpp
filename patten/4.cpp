#include<iostream>
using namespace std;


int main(){
    cout<<"enter value of n ->";
    int n;
    cin>>n;
    int num = 1;
    int i =1;
    while(n>=i){
        int j = 1;
        while(n>=j){
            cout<<num<<" ";
            j++;
            num++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}