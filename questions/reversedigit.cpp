#include <iostream>
using namespace std;

int main(){
    cout<<"enter your number -> ";
    int num;
    cin>>num;

    int rev = 0 ;
    while(num>0){
        int r = num%10;
        rev = rev*10 +r;
        num = num/10;
    }
    cout<<rev;
    return 0;
}