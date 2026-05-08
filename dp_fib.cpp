#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int> &dp){
    if(n == 1||n==0){
        return 1;
    }
    if(dp[n]!= -1){
        return dp[n];
    }
    dp[n] = fib(n-1,dp) + fib(n-2,dp);
    return dp[n];
}


int main(){
    int n;
    cout<<"enter the number -> ";
    cin>>n;

    vector<int> v(n+1);

    for(int i = 0; i<=n; i++){
        v[i] = -1;
    }


    cout<<fib(n,v);


}