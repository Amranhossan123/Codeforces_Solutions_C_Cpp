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

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}


int max_show(Node* head){
    if(head==NULL){
        return INT_MIN;
    }
    Node* temp=head;
    int max=temp->val;
    while (temp!=NULL)
    {
        if(temp->val > max){
            max=temp->val;
        }
        temp=temp->next;
    }
    return max;
}


int min_show(Node* head){
    if(head==NULL){
        return INT_MAX;
    }
    Node* temp=head;
    int min=temp->val;
    while (temp!=NULL)
    {
        if(temp->val <min){
            min=temp->val;
        }
        temp=temp->next;
    }
    return min;
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
    // print(head);
    int max=max_show(head);
    int min=min_show(head);
    int result=max-min;
    cout<<result;

    return 0;
}