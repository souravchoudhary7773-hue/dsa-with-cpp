#include <iostream>
#include <string>
using namespace std;


class PerClass{
    public:
        string name;
        int age;
        int rollno;

        PerClass(string name, int age, int rollno){
            this->name = name;
            this->age = age;
            this->rollno = rollno;
        }

    friend class FriendClass; // declearing friend class for giving access to that class.
    friend void fun(PerClass& obj); // declaring freind fun..
        
};
// friend class declaring 
class FriendClass{
    public:
        void getInfo(PerClass& obj){
            cout<<"name age rollno is ->"<<obj.name<<" "<<obj.age<<" "<<obj.rollno<<endl;
        }
};

// friend function globle defination...
void fun(PerClass& obj){
    cout<<"name age rollno is ->"<<obj.name<<" "<<obj.age<<" "<<obj.rollno<<endl;

}


// declaring forward class
class first;

// declaring friend class function ,class scpoe function..
class second{
    public:
        void function(first& obj);
};
class first{
    public:
        string name;
        int age;

        first(string name, int age){
            this->name = name;
            this->age = age;
        }

    friend void second::function(first& obj);
};

// defining friend function..
void second::function(first& obj){
            cout<<obj.name<<" "<<obj.age<<endl; 
        }

int main(){
    PerClass obj1("sourav",20,120);
    FriendClass obj2;
    obj2.getInfo(obj1);
    fun(obj1);

    first obj3("Aryan",25);
    second obj4;
    obj4.function(obj3);





return 0 ;

}