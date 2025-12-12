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



void tail_delete(Node* head,Node* &tail,int idx){
    Node* temp=head;
    for(int i=1;i<idx;i++){
        temp=temp->next;
    }
    Node* deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
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
    int input;    
    while(true){
        cin>> input;
        if(input == -1){
            break;
        }
        tail_insert(head,tail,input); 
    }
    tail_delete(head,tail,3);
    print(head);
   

    return 0;
}