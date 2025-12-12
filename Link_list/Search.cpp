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

int index(Node* head){
    Node* temp=head;
    int value;
    cin>>value;
    int idx=0;
    int flag=0;
    while(temp!=NULL){
        if(value==temp->val){
            flag=1;
            break;
            }
        temp=temp->next;
        idx=idx+1;
    }
    if(flag==1){
        return idx;
    }else{
        return -1;
    }

}

int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
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
        int result=index(head);
        cout<<result<<endl;

    }
    return 0;
}