#include <iostream>
using namespace std;
int main(){
    char x = 'A';
    switch(x){
        case 'A':
        cout<<"choice is A.";
        break;
        case 'B':
        cout<<"choice is B.";
        break;
        default:
        cout<<"not either choice match.";
        break;
    }
return 0;
}