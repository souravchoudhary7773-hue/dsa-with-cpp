#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(){
    vector<int> vect = {1,2,3,4,4,5,5};
    vector<int>::iterator ptr;
    for(ptr = vect.begin(); ptr<vect.end(); ptr++){
        cout<<*ptr<<' ';
    }
    return 0;
}