#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right=NULL;
    }
};

void levelorder_print(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* f=q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left)
            q.push(f->left);
        if(f->right){
            q.push(f->right);
        }
    }
}

Node* input_binary(){
    int val;
    cin>>val;
    Node* root;
    if(val==-1){
        root=NULL;
    }else{
        root=new Node(val);
    }
    queue<Node*>q;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        //1.ber kore niye asa;

        Node* p=q.front();
        q.pop();

        //2.oi node ke niye kaj;

        int l,r;
        cin>>l>>r;
        Node* myleft,*myright;
        if(l==-1){
            myleft=NULL;
        }else{
            myleft=new Node(l);
        }
        if(r==-1){
            myright=NULL;
        }else{
            myright=new Node(r);
        }

        p->left=myleft;
        p->right=myright;

        //3.children push kore rakha;

        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }

   return root; 
}



int main()
{
    Node* root=input_binary();
    levelorder_print(root);
    return 0;
}