#include<iostream>
#include<stack>
using namespace std;

struct TwoStacks
{
    int * arr;
    int cap,top1,top2;

    TwoStacks(int x){
        cap = x;
        top1 = -1;
        top2 = x-1;
        arr = new int(x);
    }

    void push1(int data){
        if (top1<top2-1)
        {
            arr[++top1] = data;
        }else{
            cout<<"stack is full."<<endl;
        }
    }
    void push2(int data){
        if (top1<top2-1)
        {
            arr[--top2] = data;
        }else{
            cout<<"stack is full."<<endl;
        }
    }
    int size(){
        return cap;
    }
    int pop1(){
        if (top1>=0)
        {
            int x = arr[top1];
            top1--;
            return x;
        }else{
            cout<<"stack underflow."<<endl;
            exit(1);
        }
    }
    int pop2(){
        if (top2<cap)
        {
            int x = arr[top2];
            top2++;
            return x;
        }else{
            cout<<"stack underflow."<<endl;
            exit(1);
        }
        
    }
};
int main() 
{ 
    TwoStacks ts(5); 
    ts.push1(5); 
    ts.push2(10); 
    ts.push2(15); 
    ts.push1(11); 
    ts.push2(7); 
    cout << "Popped element from stack1 is "<<ts.pop1(); 
    ts.push2(40); 
    cout << "\nPopped element from stack2 is "<< ts.pop2(); 
    return 0; 
}
