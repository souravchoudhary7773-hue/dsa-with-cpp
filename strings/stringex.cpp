#include <iostream>
#include <string>
#include <memory>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

// string as a function
void print(char str[])
{
    printf("%s", str);
}

// finding substring
bool isSubStr(string &str1, string &str2, int n, int m)
{
    if (m > n)
    {
        return false;
    }
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
    }
    return j == m;
}

// cheacking anagram
// naive soln
bool anagram(string &s1, string &s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}
// efficinet soln
const int CHAR = 256;
bool isAnagram(string &str1, string &str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }
    int count[CHAR] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }
    return true;
}

//first left most repeated char occurence  index
//naive soln
int leftfirst(string &str){
    for(int i = 0; i< str.length(); i++){
        for(int j = i+1; j<str.length(); j++){
            if(str[i]==str[j]){
                return i;
            }
        }
    }
    return -1;
}
// better soln
int leftfirsteff(string &str){
    int count[CHAR]= {0};
    for(int i = 0; i<str.length();i++){
        count[str[i]]++;
    }
    for(int j = 0; j<=CHAR; j++){
        if(count[str[j]]>1){
            return j;
        }
    }
    return -1;
}
// efficient soln
int leftMost(string & str){
    int count[CHAR] = {0};
    fill(count,count+CHAR,-1);
    int res  = INT_MAX;
    for (int i = 0; i < str.length(); i++)
    {
        int fi = count[str[i]];
        if(fi==-1){
            count[str[i]] = i;
        }else{
        res  = min(res,fi);
        }
    }
    return (res==INT_MAX)?-1:res;
    
}


// leftmost non repeating char index
// naive soln
int naiveLeft(string &str){
    for(int i= 0; i<str.length(); i++){
        bool flag = false;
        for(int j = 0; j<str.length();j++){
            if(str[i] == str [j] && j!=i){
                flag = true;
                break;
            }
        }
        if(flag == false){
            return i;
        }
    }
    return -1;
}

// better soln
int betterLeft(string &str){
    int count[CHAR] = {0};
    for(int i = 0; i<str.length(); i++){
        count[str[i]]++;
    }
    for(int i = 0; i< str.length(); i++){
        if(count[str[i]]==1){
            return i;
        }
    }
    return -1;
}

// efficient soln
int effiLeft(string &str){
    int index[CHAR];
    fill(index, index+CHAR, -1);
    for(int i = 0; i<str.length(); i++){
        if(index[str[i]]==-1){
            index[str[i]]=i;
        }else{
            index[str[i]]=-2;
        }
    }
    int res = INT_MAX;
    for(int i = 0; i<=CHAR; i++){
        if(index[i]>= 0){
            res = min(res, index[i]);
        }
    }
    return (res == INT_MAX)?-1:res;
}

// reversing string words 
void reversechar(char str[], int low, int high){ 
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
void reverseWord(char str[], int n){
    int start  = 0;
    for(int end = 0; end<n;end++){
        if(str[end] == ' '){
            reversechar(str,start, end-1);
            start = end+1;

        }
    }
    reversechar(str, start, n-1);
    reversechar(str, 0,n-1);
}
// insearting char at any position
void insertCh(string &str,char ch, int pos){
    str.insert(str.begin()+pos,ch);
}
// custom function
string fun(string &str,char ch,int pos){
    string res ="";
    for(int i = 0; i<str.length(); i++){
        if(i==pos){
            res.push_back(ch);
        }
        res.push_back(str[i]);
    }
    if(pos>str.length()){
        res.push_back(ch);

    }
    return res;
}

// removing  char 
//using built in fun erase
string fun1(string str, int pos){
    if(pos>str.length()||pos<0){
        return str;
    }
    str.erase(pos,1);
    return str;
}
//using own custom fun
string fun2(string &str, int pos){
    if(pos>str.length()||pos<0){
        return str;
    }
    for(int i = pos; i<str.length(); i++){
        str[i]=str[i+1];
    }
    str.resize(str.length()-1);
    return str;
    
}

// removing all the char match with
// own custom fun
string fun3(string &str, char ch){
    int j = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]!=ch){
            str[j++]=str[i];
        }
    }
    str.resize(j);
    return str;

}

// concatination own function
string fun4(string str1, string str2){
    string res;
    for(char ch :str1){
        res.push_back(ch);
    }
    for(char ch : str2){
        res.push_back(ch);
    }
    return res;
}

// revearsing string 
// custom function
string fun5(string str){
    string res;
    for(int i  = str.size()-1; i>=0; i--){
        res.push_back(str[i]);
    }
    return res;
}

//fiding all sustrings
vector<string> fun6(string str){
    vector<string> res;
    for (int i = 0; i < str.length(); i++)
    {
        for(int j = i; j<str.length(); j++){
            res.push_back(str.substr(i, j-i+1));
        }
    }
    return res;
}


int main()
{

    
    char str[] = "hello everyone";
    printf("%s", str);
    cout << endl;

    print(str);
    cout << endl;

    string str1 = "hiiii";
    cout << str1;
    cout << endl;

    // using new keyword
    string *s = new string("hello");
    cout << *s;
    delete s;
    cout << endl;

    // using uniqe poniter
    unique_ptr<string> s1 = make_unique<string>("hello");
    cout << *s1;
    cout << endl;

    // finding substring
    string a = "abcdef";
    string b = "aef";
    int n = a.length() - 1;
    int m = b.length() - 1;
    cout << isSubStr(a, b, n, m);
    cout << endl;

    // cheacking anagram
    string s3 = "aabbc";
    string s2 = "ababc";
    cout << anagram(s3, s2) << endl;
    cout << isAnagram(s3, s2)<<endl;
    

    // left most repeating char index
    string str4 = "sourav choudhary";
    string str5 = "baab";
    cout<<leftfirst(str4)<<endl;
    cout<<leftfirsteff(str4)<<endl;
    cout<<leftfirsteff(str5)<<endl;
    cout<<leftMost(str5)<<endl;


    // leftmost non repeating char index
    string str6 = "geeksforgeeks"; 
    cout<<naiveLeft(str6)<<endl;
    cout<<betterLeft(str6)<<endl;
    cout<<effiLeft(str6)<<endl;

    //reverse of string words
    char str7[] = "hello my dear";
    int size = strlen(str7);
    reverseWord(str7, size);
    cout<<str7<<endl;

    //inserting char at position
    string str8 = "hello";
    insertCh(str8, 'h',3);
    cout<<str8<<endl;
    cout<<fun(str8,'a',5)<<endl;

    // removing char form position
    string str9 = "sourav";
    cout<<fun1(str9,3)<<endl;
    cout<<fun2(str9,2)<<endl;

    // removing all the char match with
    string str10 = "banana";
    cout<<fun3(str10, 'a')<<endl;

    

    // concatination of two string
    string str11 =  " hello";
    cout<<fun4(str10,str11)<<endl;


    // revearsing string  
    cout<<fun5(str11);


    

    // finding all substrings
    string str12 = "abc";
    vector<string> res = fun6(str12);
    for(auto c: res){
        cout<<c<<endl;
    }




    return 0;
}