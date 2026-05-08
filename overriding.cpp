#include <iostream>
using namespace std;

class first
{
public:
    string name;
    int age;
    first(string name, int age) : name(name), age(age) {};

    // this first function method..
    virtual void detail()
    {
        cout << "first class function." << endl;
    }
};

class second : public first
{
public:
    second(string name , int age): first(name, age){}
    void  detail() override
    {
        cout << "second class function." << endl;
    }
};

int main()
{   
first obj1("sourav",20);
second obj2("aryan",18);
obj1.detail();
obj2.detail();

return 0;
}