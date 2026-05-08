#include <iostream>
#include<stack>
#include<string>
using namespace std;

bool res(string str){
    stack<char> s;
    for(char c : str){
        if (c == '('||c=='['||c =='{')
        {
            s.push(c);
        }else{
            if (s.empty())
            {
                return false;
            }else if (c ==')'&& s.top()!='(')
            {
                return false;
            }else if(c == ']'&& s.top()!='['){
                return false;
            }else if (c =='}'&& s.top()!='{')
            {
                return false;
            }else{
                s.pop();
            }
            
            
            
        }
    }
    return s.empty();
}

int main(){
    string str = "(({[]}))";
    cout<<res(str);
    return 0;
}