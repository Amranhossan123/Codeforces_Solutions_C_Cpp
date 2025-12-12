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

void reverse_list(Node* &head,Node* &tail,Node* temp){
    if(temp->next==NULL){
        head=temp;
        return;
    }
    reverse_list(head,tail,temp->next);
    temp->next->next=temp;
    temp->next=NULL;
    tail=temp;
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
    reverse_list(head,tail,head);
    cout<<head->val<<endl;
    print(head);
    
    return 0;
}