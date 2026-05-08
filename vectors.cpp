#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};

    cout<<"size of v vector -> "<<v.size()<<endl;

    v.push_back(20);
    v.push_back(21);
    v.pop_back();
    cout<<v.at(2)<<endl;
    for(int val : v){
        cout<<val<<endl;
    }
    vector<int>v1(4,5);
    cout<<v1[2];
    


    return 0;
}