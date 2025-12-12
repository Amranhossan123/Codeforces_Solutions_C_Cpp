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

void tail_insert(Node* &head,Node* & tail,int val){
    Node* newnode=new Node(val);
    Node* temp=head;
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    tail=newnode;

}

void remove_value(Node* &head,Node* &tail){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        Node* temp1=temp;
        while(temp1->next!=NULL){
            if(temp1->next->val==temp->val  ){
                Node* duplicate=temp1->next;
                temp1->next=temp1->next->next;
                if(duplicate==tail){
                    tail=temp1;
                }
                delete duplicate;
            }
            else{
                temp1=temp1->next;
            }
        }
        temp=temp->next;

    }
}

void print(Node* head){
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
    
    remove_value(head,tail);
    print(head);
    
    return 0;
}