#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    string s;
    Node* next;
    Node* prev;
    Node(string s){
        this->s=s;
        this->next=NULL;
        this->prev=NULL;
    }
};


void insert_tail(Node* &head,Node* &tail,string s){
    Node* newnode=new Node(s);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}


void forward_print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->s<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    string line,s;
    getline(cin,line);
    stringstream ss(line);
    while(ss>>s && s!="end"){
        insert_tail(head,tail,s);
    }
    Node* temp=head;
   int test;
   cin>>test;
   string comment,site;
   for(int i=0;i<test;i++){
        cin>>comment;
        if(comment=="visit"){
            cin>>site;
            Node* temp1=head;
            bool fount=false;
            while(temp1!=NULL){
                if(temp1->s==site){
                    temp=temp1;
                    cout<<temp->s<<endl;
                    fount=true;
                    break;
                }
                temp1=temp1->next;
            }
            if(fount==false){
                cout<<"Not Available"<<endl;
            }
        }
        else if(comment=="prev"){
            if(temp->prev!=NULL){
                temp=temp->prev;
                cout<<temp->s<<endl;
            }
            else{
                cout<<"Not Available"<<endl;
            }
        }
        else if(comment=="next"){
            if(temp->next!=NULL){
                temp=temp->next;
                cout<<temp->s<<endl;
            } 
            else{
                cout<<"Not Available"<<endl;
            }
        }

   }


    return 0;
}