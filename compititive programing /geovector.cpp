#include<iostream>
#include <vector>
using namespace std;
// addintion of a general geometric vector.
vector<int> add(vector<int> v1,vector<int> v2){
    vector<int> temp;
    if (v1.size()!=v2.size())
    {
        cout<<"vectors are not equal."<<endl;
        return temp;
    }

    vector<int> result;
    result.reserve(v1.size());

    for(int i =0;i<v1.size();i++){
        result.push_back(v1[i]+v2[i]);
    }
    return result;
}

// subtraction of geo vector.
vector<int> sub(vector<int> v1,vector<int> v2){
    vector<int> temp;
    if (v1.size()!=v2.size())
    {
        cout<<"vectors are not equal."<<endl;
        return temp;
    }

    vector<int> result;
    result.reserve(v1.size());

    for(int i =0;i<v1.size();i++){
        result.push_back(v1[i]-v2[i]);
    }
    return result;
}
// dot product of 3d vectors,
double dotPro(vector<double>v1,vector<double> v2){
    double res = 0;
    for(int i = 0; i< 3; i++){
        res = res + v1[i]*v2[i];
    }
    return res;
}

// cross product of 3d vector

vector<double> crossPro(vector<double>v1,vector<double>v2){
  return {
    v1[1]*v2[2]-v2[1]*v1[2],
    v1[2]*v2[0]-v1[0]*v2[2],
    v1[0]*v2[1]-v1[1]*v2[0]
  };

}

int main(){
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {1,2,3};
    vector<int> res = add(v1,v2);
    vector<int> su = sub(v1,v2);
    vector<double> v3 = {1,1,1};
    vector<double> v4 = {2,2,3};
    cout<<dotPro(v3,v4)<<endl;
    for(auto num :res){
        cout<<num<<" ";
    }
    for(auto num : su){
        cout<<num<<" ";
    }
    vector<double> cross = crossPro(v3,v4);
    for(auto num : cross){
        cout<<num<<" ";
    }
    return 0;

}