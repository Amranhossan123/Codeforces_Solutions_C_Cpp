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

void tail_insert(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    // Node* temp=head;
    // while(temp->next!=NULL){
    //     temp=temp->next;
    // }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}


void print_forward(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    while(true){
        int val;
        cin>>val;
        if(val==-1){
            break;
        }
        tail_insert(head,tail,val);
    }
    print_forward(head);


    return 0;
}