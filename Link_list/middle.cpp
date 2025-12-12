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
void total(Node* head){
    Node* temp=head;
    Node* temp1=head;
    Node* temp2=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int middle=count/2;
    if(middle%2==0){
        for(int i=1;i<=middle;i++){
            temp1=temp1->next;
        }
        cout<<temp1->val;
    }
    else{
        for(int i=1;i<=middle-1;i++){
            temp2=temp2->next;
        }
        cout<<temp2->val<<endl;
        cout<<temp2->next->val;
    }
}
int main()
{
    Node* head=new Node(1);
    Node* a=new Node(2);
    Node* b=new Node(3);
    Node* c=new Node(4);
    Node* d=new Node(5);
    Node* e=new Node(6);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    
    total(head);

    return 0;
}