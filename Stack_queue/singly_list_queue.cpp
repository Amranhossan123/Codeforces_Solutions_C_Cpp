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

class Myqueue{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;

    void push(int val){
        sz++;
        Node* newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }

    void pop(){
        sz--;
        if(head==NULL){
            return;
        }
        Node* deletenode=head;
        head=head->next;
        delete deletenode;
        if(head==NULL){
            tail=NULL;
        }
    }

    int front(){
        return head->val;
    }

    int back(){
        return tail->val;
    }

    int size(){
        return sz;
    }

    bool is_empty(){
        if(head==NULL){
            return true;
        }else{
            return false;
        }
    }
    
};

int main()
{
    Myqueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        q.push(val);
    }

     while(q.is_empty()==false){
        cout<<q.front()<<endl;
        q.pop();
     }
    return 0;
}