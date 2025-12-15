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
       

        Node* p=q.front();
        q.pop();

       

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

        

        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }

    return root;
}

bool isleaf(Node* root){
    return root && root->left==NULL && root->right==NULL;
}

void left_boundary(Node* root,vector<int>& v){
    Node* myleft=root->left;
    while(myleft){
        if(!isleaf(myleft)){
            v.push_back(myleft->val);
        }
        if(myleft->left) myleft= myleft->left;
        else myleft=myleft->right;
    }

}

void right_boundary(Node* root,vector<int>& v){
    Node* myright=root->right;
    vector<int> temp;
    while(myright){
        if(!isleaf(myright)){
            temp.push_back(myright->val);
        }
        if(myright->right) myright=myright->right;
        else myright=myright->left;
    }
    reverse(temp.begin(),temp.end());
    for(int i:temp){
        v.push_back(i);
    }
}

void leaves(Node* root,vector<int>& v){
    if(root==NULL) return;
    if(isleaf(root)){
        v.push_back(root->val);
        return;
    }
   if(root->left) leaves(root->left,v);
   if(root->right) leaves(root->right,v);
}

int main()
{
    Node* root=input_binary();
    if(root==NULL) return 0;
    vector<int>v;
    if(!isleaf(root)) v.push_back(root->val);
    left_boundary(root,v);
    leaves(root,v);
    right_boundary(root,v);

    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}