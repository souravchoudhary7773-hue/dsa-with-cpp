#include<iostream>
using namespace std;

int main(){
    cout<<"enter any number -> ";
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j =1;
         while(j<=n+1-(i)){
            cout<<" ";
            j++;
        }
         int k =1;
         while(k<=i){
            cout<<k;
            k++;
        }
        int l = 1;
        while(l<i)
        {
            cout<<i-l;
            l++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}