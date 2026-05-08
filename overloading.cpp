#include <iostream>
#include <string>
using namespace std;

class overload{
    public:

        string name;
        int age;
        // constructor overloading
        overload(){
            cout<<"this is empty parameter obj"<<endl;
        }
        
        overload(string name, int age){
            cout<<"this is parameterise obj"<<endl;
            this->name = name;
            this->age = age;
        }

        // methode or function overloading
        void fun(){
            cout<<"non parameterize function. "<<endl;
        }
        void fun(int age){
            if(age>=18){
                cout<<"eligible for voting"<<endl;
            }else{
                cout<<"not eligible for vote"<<endl;
            }
        }


};


// operator overloading..
class Complex{
    public:
        int real;
        int img;
        Complex(){
            real = 0;
            img = 0;
        }

        Complex(int real , int img){
            this->real = real;
            this->img = img;
        }

        void print(){
            cout<<"real is -> "<<real<<"  "<<"img is -> "<<img<<endl;
        }

        // operator overloading function
        Complex operator +(Complex c){
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }
        Complex operator -(Complex c){
            Complex temp;
            temp.real = real - c.real;
            temp.img = img -c.img;
            return temp;
        }
        Complex operator *(Complex c){
            Complex temp;
            temp.real = real*c.real - img*c.img;
            temp.img = real*c.img + img*c.real;
            return temp;
        }
        Complex operator /(Complex c){
            Complex temp;
            int div = c.real*c.real+ c.img*c.img;
            if(div == 0){
                cout<<"devide is not possibul...";
                return temp;
            }
            temp.real = (real*c.real + img*c.img)/(c.real*c.real + c.img*c.img);
            temp.img = (img * c.real - real * c.img)/(c.real*c.real + c.img*c.img);
            return temp;
        }
        bool operator ==(Complex c){
            if(real == c.real && img == c.img){
                return true;
            }else{
                return false;
            }
        }
};

int main(){
    // overload obj;
    // overload obj1("saksham",15);
    // obj1.fun(20);

    Complex obj2(2,3);
    Complex obj3(2,3);
    Complex obj4;
    Complex obj5;
    Complex obj6;
    Complex obj7;
    obj4 = obj2 + obj3;
    obj5 = obj2-obj3;
    obj6 = obj2 * obj3;
    obj7 = obj2 / obj3;

    obj4.print();
    obj5.print();
    obj6.print();
    obj7.print();
    cout<<(obj2 == obj3);

    return 0;
}