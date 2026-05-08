#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums){
    int res = 0;
    for(int val : nums){
        res = res^val;
    }
    return res;
}

int main(){
    vector<int> nums = {1,1,2,3,2};
    int res = singleNumber(nums);
    if(res!= 0){
        cout<<"number is -> "<<res;
    }else{
        cout<<"not present.";
    }
    return 0 ;
}