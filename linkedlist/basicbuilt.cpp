#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

// printing linkedlist using head node referance
void printLL( Node *head){
    Node *temp = head;

    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

//using recursion 
void printRell(Node *head){
    if (head == NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    printRell(head->next);
    
}
//insertion at the begining of ll
Node*insert(Node*head, int data){
    Node *temp = new Node(data);
    temp->next = head;
    return temp;
}
//at end
Node* endInsert(Node *head ,int data){
    Node *end = new Node(data);
    if (head ==NULL)
    {
        return end;
    }
    Node * curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = end;
    return head;
}
//at position
Node *atPosition(Node* head, int pos, int data){
    Node *temp = new Node(data);
    if (head == NULL)
    {
        return temp;
    }
    Node* curr = head;
    for (int i = 0; i <= pos -2&&curr !=NULL; i++)
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

//delete head node
Node* delHead(Node* head){
    if (head == NULL)
    {
        return NULL;
    }else{
        Node *temp = head->next;
        delete head;
        return temp;
    }
    
}

// delete end node
Node* delEnd(Node *head){
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node*curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}

int main(){
    //creating LL by indivual node creation..
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;

    //creating LL using single head
    Node *head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);

    // printing ll
    printLL(head1);
    printRell(head);
    cout<<endl;

    //insert at begin 
    head1 = insert(head1,0);
    printLL(head1);

    // at the end of ll
    head1 = endInsert(head1,4);
    printLL(head1);

    return 0;
}