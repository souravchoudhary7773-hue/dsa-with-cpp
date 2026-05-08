#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int *p = arr;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<p[2];
    return 0;
}