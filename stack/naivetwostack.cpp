#include<iostream>
#include<stack>
using namespace std;

struct twoStack
{
    int *arr;
    int cap,top1,top2;

    twoStack(int x){
        cap = x;
        arr = new int(x);
        top1 = x/2 +1;
        top2 = x/2;
    }

    void push1(int data){
        if (top1>0)
        {
            top1--;
            arr[top1] = data;
        }else{
            cout<<"stack one is full."<<endl;
        }
        
    }
    void push2(int data){
        if (top2< cap-1)
        {
            top2++;
            arr[top2] = data;
        }else{
            cout<<"stack two is full."<<endl;
        }
    }
    int pop1(){
        if (top1<=cap/2)
        {
            int x = arr[top1];
            top1++;
            return x;
        }else{
            cout<<"stack 1 is underflow."<<endl;
            exit(1);
        }
    }
    int pop2(){
        if (top2<cap-1)
        {
            int x = arr[top2];
            top2--;
            return x;
        }else{
            cout<<"stack two is underflow."<<endl;
            exit(1);
        }
    }
    int size1(){
        return cap/2+1;
    }
    int size2(){
        return cap/2;
    }
};
int main() 
{ 
    twoStack ts(5); 
    ts.push1(5); 
    ts.push2(10); 
    ts.push2(15); 
    ts.push1(11); 
    ts.push2(7); 
    cout << "Popped element from stack1 is: " << ts.pop1() << endl; 
    ts.push2(40); 
    cout << "Popped element from stack2 is: " << ts.pop2() << endl; 
    return 0; 
}