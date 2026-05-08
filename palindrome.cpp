#include <iostream>
#include <string>
using namespace std;
void palindrome(string s){
    string p = s;
    reverse(p.begin(),p.end());
    if(p==s){
        cout<<"is palindrome";
    }else{
        cout<<"not palindrome";
    }
}
int main(){
    string s;
    cout<<"enter your string -> ";
    getline(cin,s);
    palindrome(s);
    return 0;


}