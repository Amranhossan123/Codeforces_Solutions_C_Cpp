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


void insert_head(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}

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


void insert_any_pos(Node* head,Node* temp,int idx,int val){
    Node* newnode=new Node(val);
    for(int i=1;i<idx;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
}

int count_node(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count=count+1;
        temp=temp->next;
    }
    return count;
}

void forward_print(Node* head){
    Node* temp=head;
    cout<<"L -> ";
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reverse_print(Node* tail){
    Node* temp=tail;
    cout<<"R -> ";
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}


int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int idx,val;
        cin>>idx>>val;
        int count=count_node(head);
        if(idx==0){
            insert_head(head,tail,val);
            forward_print(head);
            reverse_print(tail);
        }
        else if(idx>count){
            cout<<"Invalid"<<endl;
        }else if(idx==count){
            insert_tail(head,tail,val);
            forward_print(head);
            reverse_print(tail);
        }
        else{
            insert_any_pos(head,head,idx,val);
            forward_print(head);
            reverse_print(tail);
        }


    }
  


    return 0;
}