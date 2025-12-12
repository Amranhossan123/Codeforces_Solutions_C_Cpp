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

void cycle_detected(Node* head){
    Node* fast=head;
    Node* slow=head;
    int flag=0;

    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"cycle detected";
    }else{
        cout<<"Not cycle";
    }
}

int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* tail=new Node(50);


    head->next=a;
    a->next=b;
    b->next=c;
    c->next=tail;
    // tail->next=head;
    
    cycle_detected(head);

    return 0;
}