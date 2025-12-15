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

Node* input_node(){
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myleft,* myright;
        if(l==-1) myleft=NULL;
        else myleft=new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);
        p->left=myleft;
        p->right=myright;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }

    return root;
}

int height_count(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 0;
    int l=height_count(root->left);
    int  r=height_count(root->right);
    return max(l,r)+1;
}

int main()
{
    Node* root=input_node();
    int result=height_count(root);
    cout<<result<<endl;
    return 0;
}