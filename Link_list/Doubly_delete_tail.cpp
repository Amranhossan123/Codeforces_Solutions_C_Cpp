#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print_forward(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void tail_delete(Node* &head,Node* &tail){
    if(tail==NULL){
        return;
    }
    Node* deletenode=tail;
    tail=tail->prev;
    delete deletenode;
    if(tail==NULL){
        head=NULL;
        return;
    }
    tail->next=NULL;
}


int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* tail=new Node(40);
  
    head->next=a;
    a->prev=head;

    a->next=b;
    b->prev=a;

    b->next=tail;
    tail->prev=b;
    
    tail_delete(head,tail);
    print_forward(head);

    return 0;
}