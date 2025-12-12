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

void head_insert(Node* &head,Node* & tail,int val){
    Node* Newnode=new Node(val);
    if(head==NULL){
        head=Newnode;
        tail=Newnode;
        return;
    }
    Newnode->next=head;
    head=Newnode;
}


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



void delete_head(Node* &head,Node* & tail){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    Node* delete_node=temp;
    head=head->next;
    delete delete_node;
    if(head==NULL){
        tail=NULL;
    }
}

void tail_delete(Node* head,Node* &tail){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        tail=NULL;
        return;
    }
    Node* temp=head;
    while(temp->next!=tail){ 
        temp=temp->next;
    }
    delete tail;
    tail=temp;
    tail->next=NULL;
}

//|| idx<1
//&& temp->next!=NULL
void delete_any_pos(Node* &head,Node* &tail,int idx){
    if(head==NULL ){
        return;
    }
    Node* temp=head;
    for(int i=1;i<idx;i++){
        temp=temp->next;
    }
    if(temp->next==NULL){ 
        return;
    }
    Node* deleteNode=temp->next;
    temp->next=temp->next->next;

    delete deleteNode;
    if(temp->next==NULL){
        tail=temp;
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

int count_show(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count=count+1;
        temp=temp->next;
    }
    return count;
}


int main()
{
    int queries;
    cin>>queries;
    Node* head=NULL;
    Node* tail=NULL;
    for(int i=1;i<=queries;i++){
        int idx,value;
        cin>>idx>>value;
        if(idx==0){
            head_insert(head,tail,value);
             print(head);
        }
        else if(idx==1){
            tail_insert(head,tail,value);
             print(head);
        }
        else if(idx==2){
            int count=count_show(head);
            if(value==0){
                delete_head(head,tail);
                print(head);
            }else if(value==count-1){
                tail_delete(head,tail);
                print(head);
            }else if(value>count){
                print(head);
            }else{
                 delete_any_pos(head,tail,value);
                 print(head);
            }
        }

    }

    return 0;
}