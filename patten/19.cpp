#include<iostream>
using namespace std;

int main(){
    cout<<"enter any number -> ";
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int k = 1;
        while(k<i){
            cout<<"*";
            k++;
        }
        int l = 1;
        while(l<i){
            cout<<"*";
            l++;
        }
        int m = 1;
        while(m<=n-i+1){
            cout<<(n-i)-m+2;
            m++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}