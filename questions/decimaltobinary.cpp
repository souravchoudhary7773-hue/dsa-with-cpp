#include <iostream>
using namespace std;

int main(){
    cout<<"enter your number -> ";
    int num;
    cin>>num;
    int i =0;
    int res = 0 ;
    while(num>0){
        int bit = num&1;
        res = res + pow(10,i)*bit;
        num = num>>1;
        i++;
    }
    cout<<res;
    return 0;
}