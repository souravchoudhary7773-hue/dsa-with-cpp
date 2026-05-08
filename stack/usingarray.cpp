#include<iostream>
using namespace std;
struct myStack
{
    int *arr;
    int cap;
    int top;
    myStack(int x){
        arr = new int(x);
        cap  = x;
        top = -1;
    }
    ~myStack(){
        delete[] arr;
    }
    bool isEmpty(){
        if (top == -1)
        {
            return true;
        }else{
            return false;
        }
        
    }
    void push(int data){
        if(top ==cap-1){
            cout<<"stack is full";
            return;
        }
        top++;
        arr[top] = data;
    }
    int size(){
        return cap;
    }
    bool isFull(){
        if (top == cap-1)
        {
            return true;
        }else{
            return false;
        }
    }
    int pop(){
        if (top == -1)
        {
            cout<<"stack is empty";
            return INT_MAX;
        }
        return arr[top--];
    }
    int peek(){
        if (top == -1)
        {
            return INT_MAX;
        }
        return arr[top];
    }
    void display(){
        if (top == -1)
        {
            cout<<"stack is empty";
            return;
        }else{
            for (int i = top; i >=0; i--)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
    }
};

int main(){
    myStack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    cout<<s.isEmpty()<<" "<<s.isFull()<<endl;
    cout<<s.peek();
    return 0;
}