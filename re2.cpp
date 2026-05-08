#include <iostream>
using namespace std;
void fun(int n){
    if(n<=0){
        return;
    }
    cout<<"gfg\n";
    fun(n-1);
}

int main(){
    int n;
    cout<<"enter your number->";
    cin>>n ;
    fun(n);
    return 0;

}