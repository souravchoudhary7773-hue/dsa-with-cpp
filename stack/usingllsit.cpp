#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Stack
{
    Node *head;

    Stack(){
        head = NULL;
    }
    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
    }
    void pop(){
        if (isEmpty())
        {
            cout<<"stack is empty";
        }else{
            Node* temp;
            temp = head;
            head = head->next;
            delete temp;
        }
    }
    bool isEmpty(){
        if (head == NULL)
        {
            return true;
        }else{
            return false;
        } 
    }
    int peek(){
        if (isEmpty())
        {
            cout<<"stack is empty";
            return -1;
        }else{
            return head->data;
        }
    }
    void display(){
        if (isEmpty())
        {
            cout<<"stack is empty";
        }else{
            Node *curr = head;
            while (curr != NULL)
            {
                cout<<curr->data<<" ";
                curr = curr->next;
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
    s.pop();
    s.pop();
    s.pop();
    return 0;
}

