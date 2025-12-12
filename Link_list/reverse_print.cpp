#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void tail_insert(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void reverse_print(Node* head){
    Node* temp=head;
    if(temp==NULL){
        return;
    }
    reverse_print(temp->next);
    cout<<temp->val<<endl;
}


void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }

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
    reverse_print(head);
    
    return 0;
}