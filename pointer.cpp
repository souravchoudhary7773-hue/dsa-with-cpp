#include <iostream>
using namespace std;
void pointer(){
    int num = 20;
    int *ptr = &num ;
    cout<<"value of ptr is ->"<<ptr<<endl ;
    cout<<"value of num is ->"<<num<<endl;
    cout<<"value of *ptr is ->"<<*ptr<<endl;
}

int main(){
    pointer();
    return 0;
}