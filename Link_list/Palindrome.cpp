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

void insert_tail(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}


void is_palindrome(Node* head,Node* tail){
    if(head->next==NULL){
        cout<<"YES";
        return;
    }
    Node* temp=head;
    Node* temp1=tail;
    int flag=1;
    while(temp->prev!=temp1 && temp!=temp1){
        if(temp->val!=temp1->val){
            flag=0;
            break;
        }
        temp=temp->next;
        temp1=temp1->prev;
    }
    if(flag==1){
        cout<<"YES";
    }else{
        cout<<"NO";
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
        insert_tail(head,tail,val);
    }
    is_palindrome(head,tail);
  


    return 0;
}