#include<iostream>
using namespace std;

int main(){
    cout<<"enter any number -> ";
    int n;
    cin>>n;
    int count = 0;
    int i = 1;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}