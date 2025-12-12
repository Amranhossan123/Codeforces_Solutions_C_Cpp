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
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    tail=newnode;
}
void print(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    
}

int flag_return(Node* head,Node* head1){
    Node* temp=head;
    Node* temp1=head1;
    int flag=1;
    while(true){

        if( temp==NULL && temp1==NULL){
            return 1;
        }
        else if(temp==NULL){
            return -1;
        }
        else if(temp1==NULL){
            return -1;
        }
        if(temp->val!=temp1->val){
           flag=0;
           break; 
        }
        temp=temp->next;
        temp1=temp1->next;

    }
    if(flag==1){
        return 1;
    }else{
        return -1;
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

    Node* head1=NULL;
    Node* tail1=NULL;
    while(true){
        int val1;
        cin>>val1;
        if(val1==-1){
            break;
        }
        tail_insert(head1,tail1,val1);
    }

    int result=flag_return(head,head1);
    if(result==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}