#include <iostream>
using namespace std;

//recursive function..
long long  power(long long  a,long long b){
    if(b ==0){
        return 1;
    }

    long long res = power(a,b/2);
    
    if(b%2){
        return res*res*a;
    }else{
        return res*res;
    }

}

// iterative function ..

long long poweritr(long long a, long long b){
    long long res = 1;
    while(b){
        if(b&1){
            res = res*a;
        }
        a = a*a;
        b >>=1;
    }
    return res;
}

int main(){

    cout<<power(2,12)<<endl;
    cout<<poweritr(2,12)<<endl;
    return 0;
}