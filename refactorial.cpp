#include <iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    cout<<"Enter number for factorial->";
    int n;
    cin>>n;
    int factorial = fact(n);
    cout<<"factorial is-"<<factorial;
    return 0;
}