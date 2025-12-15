#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_binary()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node*> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);
        p->left = myleft;
        p->right = myright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void insert(Node* &root,int val){
    if(root==NULL){
        root=new Node(val);
    }
    if(root->val > val){
        if(root->left==NULL){
            root->left=new Node(val);
        }else{
            insert(root->left,val);
        }
    }else{
        if(root->right==NULL){
            root->right=new Node(val);
        }else{
            insert(root->right,val);
        }
    }

}


void print_value_level(Node* root){
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p=q.front();
        q.pop();
        cout<<p->val<<" ";
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}


int main()
{
    Node *root = input_binary();
    int val;
    cin>>val;
    insert(root,val);
    print_value_level(root);
    
    return 0;
}