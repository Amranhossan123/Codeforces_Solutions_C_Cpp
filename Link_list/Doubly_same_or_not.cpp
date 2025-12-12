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
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;

}


void add_element(Node* &head,Node* &tail ){
    while(true){
        int val;
        cin>>val;
        if(val==-1){
            break;
        }
        tail_insert(head,tail,val);
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

void same_check_list(Node* head,Node* head1){
    Node* temp=head;
    Node* temp1=head1;
    int flag=1;
    while (true){
        if(temp->next!=NULL && temp->next!=NULL){
            if(temp->val!=temp1->val){
                flag=0;
                break;
            }
        }else if(temp->next==NULL && temp1->next!=NULL){
            flag=0;
            break;
        }else if(temp->next!=NULL && temp1->next==NULL){
            flag=0;
            break;
        }else{
            break;
        }
            temp=temp->next;
            temp1=temp1->next;

    }

    if(flag==1){
        cout<<"same link list"<<endl;
    }else{
        cout<<"unique link list"<<endl;
    }

}

int main()
{   
    Node* head=NULL;
    Node* tail=NULL;

    Node* head1=NULL;
    Node* tail1=NULL;

    add_element(head,tail);
    add_element(head1,tail1);
    
    same_check_list(head,head1);

    
    
    return 0;
}