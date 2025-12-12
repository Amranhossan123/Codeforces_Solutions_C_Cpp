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
void check(Node* head){
    Node* temp=head;
    // Node* temp1=head->next;
    int flag=1;
    while (temp->next!=NULL)
    {
        if(temp->val > temp->next->val){
            flag=0;
            break;
        }
        temp=temp->next;
        // temp1=temp1->next;
        }
    if(flag==1){
        cout<<"Yes";
    }else{
        cout<<"No";
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
    
    check(head);



    return 0;
}