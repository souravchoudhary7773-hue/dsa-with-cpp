#include <iostream>
using namespace std;
const int MAX = 3;
int main(){
    int arr[MAX]= {1,2,3};
    int *ptr = arr;
    for(int i = 0; i<MAX; i++){
        cout<<"address of point is ->"<<ptr<<endl;
        cout<<"value of *ptr is -> "<<*ptr<<endl;
        ptr++;
    }
    return 0;
}