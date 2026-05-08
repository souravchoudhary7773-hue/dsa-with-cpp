#include <iostream>
using namespace std;
void fun1(){
    cout<<"first function\n";
}
void fun2(){
    cout<<"second function\n";
    fun1();
}
void fun3(){
    cout<<"third function\n";
    fun2();
}

int main(){
    cout<<"this is recursion funtion like fun1,fun2,fun3 - >\n";
    fun3();
    return 0;
}