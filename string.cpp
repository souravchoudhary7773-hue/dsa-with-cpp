#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "This is a code for string opprations.\n";
    string str1="first";
    string str2 = "second";
    string byadd = str1+" "+str2;
    string byappend = str1.append(str2);

    cout<<str;
    cout<<byadd<<endl;
    cout<<byappend<<endl;
    cout<<"lenght of string str is ->"<<str.length()<<endl;
    cout<<"taking input as string";
    string input ;
    getline(cin,input);
    cout<<"you give input ->"<<input<<endl;
    cout<<"element accesseing of index 2"<<str[2];


    return 0;
}