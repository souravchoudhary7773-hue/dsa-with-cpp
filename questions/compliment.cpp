#include <iostream>
using namespace std;

int main(){
    cout<<"enter your number -> ";
    int num;
    cin>>num;
    cout<<"enter base of the number -> ";
    int base ;
    cin>>base;
    int tamp = num;
    int count = 0 ;
    while(num>0){
        count++;
        num = num/10;
    }
    int res = pow(base,count)-tamp;
    cout<<res;
    return 0;
}