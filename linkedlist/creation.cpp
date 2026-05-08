#include <iostream>
using namespace std;

// node creation..

struct Node{
    int data;
    Node* next;
    Node(int a){
        data = a;
        next = NULL;
    }
};

//printing data of LL..
void print(Node *head){
    Node *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }

}
//print using recursion..
void printr(Node *head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    printr(head->next);
}

//insertion at the begining..
Node *beginFun(Node *head, int data){
    Node *temp = new Node(data);
    temp->next = head;
    return temp;
}

// insertion at the end..
Node *atEnd(Node *head,int data){
    Node *temp = new Node(data);
    if(head == NULL){
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

// inseartion at a position..
Node *atPos(Node *head,int pos,int data){
    Node *temp = new Node(data);
    if(head == NULL){
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i <=pos&& curr!=NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->next = third;

    // different way
    Node *h = new Node(10);
    h->next = new Node(20);
    h->next->next = new Node(30);

    print(h);
    h = beginFun(h,5); 
    h = atEnd(h,50);
    h = atPos(h,3,60);
    printr(h);
    return 0;
}