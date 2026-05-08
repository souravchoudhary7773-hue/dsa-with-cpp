#include <iostream>
using namespace std;
namespace first{
    int a,b;
}
namespace second{
    void fun(){
        cout<<"hello 2.";
    }
}

int main(){
    second::fun();
    return 0;
}