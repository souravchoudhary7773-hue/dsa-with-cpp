#include<iostream>
#include<string>
using namespace std;


// naive soln..
bool ispal(string str){
    string rev = str;
    reverse(rev.begin(),rev.end());
    return (rev == str );   
}

// effective way..
bool ispale(string str){
    int low  = 0;
    int high = str.length()-1;
    while(low<high){
        if(str[low]!=str[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}


int main(){
    string str;
    cout<<"Enter your string -> ";
    getline(cin,str);
    cout<<"\n"<<ispal(str)<<endl;
    cout<<"\n"<<ispale(str)<<endl;
    return 0;
}