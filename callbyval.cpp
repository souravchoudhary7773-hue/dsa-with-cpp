#include <iostream>
using namespace std;
int square(int n){
    cout<<"address of n in function ->"<<&n<<endl;
    n *=n;
    return n;
}
int main(){
    int n = 4;
    cout<<"address of n in main function ->"<<&n<<endl;
    square(n);
    cout<<"value of n after square is ->"<<square(n)<<endl;
    return 0;
}