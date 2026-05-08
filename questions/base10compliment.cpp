#include <iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<"enter your number -> ";
    int num;
    cin>>num;
    int tamp  = num;

    int count = 0 ;
    while(num>0){
        count++;
        num = num/10;
    }
    int res  = pow(10,count)-tamp;
    cout<<res;
    return 0;
}