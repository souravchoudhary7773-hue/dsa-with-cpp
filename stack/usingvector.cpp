#include<iostream>
#include<vector>
using namespace std;

struct Stack{
    vector<int> v;
    bool isEmpty(){
        return v.empty();
    }
    void push(int data){
        v.push_back(data);
    }
    int pop(){
        if (isEmpty())
        {
            cout<<"stack is empty";
            return INT_MAX;
        }
        int tamp = v.back();
        v.pop_back();
        return tamp;
    }
    int peek(){
        return v.back();
    }
    int size(){
        return v.size();
    }

    void display(){
        if (isEmpty())
        {
            cout<<"stack is empty";
            return;
        }else{
            for (int i = v.size()-1; i >= 0; i--)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
};


int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    cout<<s.isEmpty()<<endl;
    cout<<s.peek();
    return 0;
}