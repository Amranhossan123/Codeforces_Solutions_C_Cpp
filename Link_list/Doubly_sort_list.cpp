//with stl library

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>l;
//     while(true){
//         int val;
//         cin>>val;
//         if(val==-1){
//             break;
//         }
//         l.push_back(val);
//     }

//     l.sort();

//     for(int value:l){
//         cout<<value<<" ";
//     }

//     return 0;
// }


//with no stl library;

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
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
    newnode->prev=tail;
    tail=newnode;
}

void input_list(Node* &head,Node* &tail){
    while(true){
        int val;
        cin>>val;
        if(val==-1){
            break;
        }
        tail_insert(head,tail,val);
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

void sort_doubly_list(Node* head){
    // int min=INT_MAX;
    for(Node* i=head;i->next!=NULL;i=i->next){
        for(Node* j=i->next;j->next!=NULL;j=j->next){
            if(i->val > j->val){
                swap(i->val,j->val);
            }
        }
    }
}

int main()
{   
    Node* head=NULL;
    Node* tail=NULL;

    input_list(head,tail);
    sort_doubly_list(head);

     print(head);



   
    
    return 0;
}