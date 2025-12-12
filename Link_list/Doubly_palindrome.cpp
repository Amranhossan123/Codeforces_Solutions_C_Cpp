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

    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

void input_list(Node* &head,Node* &tail){
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

void palindrome_or_not_list(Node* head,Node* tail){
    int flag=1;
    for(Node* i=head,*j=tail;i!=j && i->prev!=j;i=i->next,j=j->prev){
        if(i->val!=j->val){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not palindrome"<<endl;
    }
}

int main()
{   
    Node* head=NULL;
    Node* tail=NULL;

    input_list(head,tail);
    

    palindrome_or_not_list(head,tail);
    

    print(head);
    
    return 0;
}