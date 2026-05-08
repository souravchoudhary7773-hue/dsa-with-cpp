#include <iostream>
#include <string>
using namespace std;

//checking binary string
bool binaryCheck(string str){
    for (int i = 0; i < str.length(); i++)
    {
        if('0'!=str[i]&&'1'!=str[i]){
            return false;
        }
    }
    return true;
}

// camel case given string
string camelCase(string &str){
    string temp;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]== ' '){
            temp += toupper(str[i+1]);
            i++;
        }else{
            temp += str[i];
        }
    }
    return temp;
}

// good approach
string camelcase(string str){
    string temp;
    bool flag = false;
    for (int i = 0; i <str.length(); i++)
    {
        if(str[i]==' '){
            flag = true;
        }else if(flag){
            temp += toupper(str[i]);
            flag = false;
        }else{
            temp += tolower(str[i]);
        }
    }
    return temp;
}

// count binary string start with 1 and ends with 1
// naive soln
int countsub(string str){
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == '1'){
            for (int j = i+1; j < str.length(); j++)
            {
                if(str[j] == '1'){
                    count++;
                }
            }
            
        }
    }
    return count;
}

// good approach
int countsubg(string str){
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == '1'){
            count++;
        }
    }
    return count*(count-1)/2;
    
}

//panagram
bool panagram(string str){
    for (char ch = 'a'; ch < 'z'; ch++)
    {
        bool flag = false;
        for (int i = 0; i < str.length(); i++)
        {
            if(ch == tolower(str[i])){
                flag = true;
            }
        }
        if (flag ==false)
        {
            return false;
        }
        
    }
    return true;
}
const int max_char = 26;
//better approach
bool panagrambetter(string str){
    vector<bool> ch(max_char,false);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            ch[str[i]-'A'] = true;
        }
        if (str[i]>='a'&&str[i]<='z')
        {
            ch[str[i]-'a'] = true;
        }
    }
    for (int i = 0; i < max_char; i++)
    {
        if (ch[i]==false)   
        {
            return false;
        }
        
    }
    return true;
    
}

// finding substring
int substring(string str1,string str2){
    int n = str1.length();
    int m = str2.length();
    if(m>n){
        return -1;
    }
    for (int i = 0; i <= n-m; i++)
    {
        int j;
        for ( j = 0; j < m; j++)
        {
            if (str1[i+j] != str2[j])
            {
                break;
            }
            
        }
        if (j==m)
        {
            return i;
        }
        
        
    }
    return -1;   
}

// using builtin function
int substringbuitin(string str1, string str2){
    if (str1.length()<str2.length())
    {
        return -1;
    }
    size_t res = str1.find(str2);
    if (res != string::npos)
    {
        return res;
    }
    
    return -1;
}

// check for subsequence 
bool subsequence(string str1, string str2, int m , int n){
    if(m<0){
        return 0;
    }
    if(n<0){
        return true;
    }
    if(str1[m] == str2[n]){
        return subsequence(str1,str2, m-1, n-1);
    }
    return subsequence(str1,str2,m-1,n);
}
bool issubseq(string str1, string str2){
    int m = str1.length()-1;
    int n = str2.length()-1;
    if (m<n)
    {
        return false;
    }
    return subsequence(str1,str2,m,n);   
}

// iterative approach
bool subseq(string str1, string str2){
    int n = str1.length()-1;
    int m = str2.length()-1;
    if(m>n){
        return false;
    }
    int i ,j=0;
    while (i<=n&&j<=m)
    {
        if (str1[i]==str2[j])
        {
            i++;
            j++;
        }
        i++;
    }
    return j==m;
}

//checking anagram
//using sort funtion
bool anagram(string str1, string str2){
    if (str1.length()!= str2.length()) 
    {
        return false;
    }
    
    string temp1 = str1;
    string temp2 = str2;
    sort(temp1.begin(),temp1.end());
    sort(temp2.begin(),temp2.end());
    return temp1 == temp2;
}

// better approach
const int maxi = 26;
bool anagramB(string str1, string str2){
    if (str1.length()!= str2.length())
    {
        return false;   
    }
    vector<int> ch1(26,0);
    vector<int> ch2(26,0);
    for (size_t i = 0; i < str1.length(); i++)
    {
        ch1[str1[i]-'a']++;
        ch2[str2[i]-'a']++;
    }
    for (size_t i = 0; i < 26; i++)
    {
        if (ch1[i]!=ch2[i])
        {
            return false;
        }
        
    }
    return true;
    
}

//using unordered map
bool anagramU(string str1, string str2){
    if (str1.length()!= str2.length())
    {
        return false;
    }

    unordered_map<char, int> charmap;
    for (size_t i = 0; i < str1.length(); i++)
    {
        charmap[str1[i]]++;
    }
    for (size_t i = 0; i < str2.length(); i++)
    {
        charmap[str2[i]]--;
    }
    for(auto &pair : charmap){
        if (pair.second!=0)
        {
            return false;
        }
        
    }
    return true;    
}

// k anagram check
//using unorder map
bool kanagram(string str1, string str2, int k){
    if(str1.length()!= str2.length()){
        return false;
    }
    unordered_map<char,int> charmap;
    for (size_t i = 0; i < str1.length(); i++)
    {
        charmap[str1[i]]++;
    }
    for (size_t i = 0; i < str2.length(); i++)
    {
        if(charmap[str2[i]]>0){
            charmap[str2[i]]--;
        }
    }
    int count = 0;
    for(auto it= charmap.begin(); it!= charmap.end();it++){
        count += it->second;
    }
    if (count>k)
    {
        return false;
    }
    return true;
}
int main(){
    //checking binary string 
    string str = "10101010111";
    cout<<binaryCheck(str)<<endl;

    // camelcase the given string
    string str1 = "hello this is sourav";
    cout<<camelCase(str1)<<endl;
    cout<<camelcase(str1)<<endl;

    // count binary string start with 1 and ends with 1
    string str2 = "101011010";
    cout<<countsub(str2)<<endl;
    cout<<countsubg(str2)<<endl;

    // finding panagram 
    string str3 = "The quick brown fox jumps over the lazy dog";
    cout<<panagram(str3)<<endl;
    cout<<panagrambetter(str3)<<endl;

    //finding substring
    string str4 = "sourav choudhary";
    string str5 = "cho";
    cout<<substring(str4,str5)<<endl;
    cout<<substringbuitin(str4,str5)<<endl;

    //check for subsueqence
    cout<<issubseq(str4,str5)<<endl;
    cout<<subseq(str4,str5)<<endl;

    //checking for anagram 
    string str6 = "geeks";
    string str7 = "sgeek";
    cout<<anagram(str6, str7)<<endl;
    cout<<anagramB(str6,str7)<<endl;

    // k anagram check
    string s = "hello";
    string s1 ="helaa";
    cout<< kanagram(s,s1,2);

    return 0;
}