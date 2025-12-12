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
    int fre[101]={0};
    while(temp!=NULL){
        int num=temp->val;
        fre[num]++;
        temp=temp->next;
    }
    for(int i=0;i<101;i++){
        if(fre[i]>1){
            cout<<"yes";
            break;
        }else{
            cout<<"No";
            break;
        }
    }
}



int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(50);
    Node* d=new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    check(head);
    return 0;
}