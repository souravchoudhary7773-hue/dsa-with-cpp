#include <iostream>
using namespace std;
int main(){
    cout<<"enter a number upto you want to print->";
    int n;
    cin>>n;

    do{
        cout<<n;
        n--;
    }while(n>0);
    return 0;
}