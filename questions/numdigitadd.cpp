#include <iostream>
using namespace std;


int main(){
    cout<< "enter your number -> ";
    int num ;
    cin>>num;
    int sum =0;
    int product = 1;

    while(num>0){
        int re = num %10;
        sum = sum+re;
        product = product*re;
        num = num/10;
    }
    
    cout<<sum<<endl;
    cout<<product<<endl;
    return 0;
}