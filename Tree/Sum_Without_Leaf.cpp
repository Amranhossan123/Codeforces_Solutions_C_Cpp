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

// void print_inorder(Node* root){
//     if(root==NULL) return;
//     print_inorder(root->left);
//     cout<<root->val<<" ";
//     print_inorder(root->right);
// }

Node* create_binary(){
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
        Node* myleft;
        if(l==-1) myleft=NULL;
        else myleft=new Node(l);
        Node* myright;
        if(r==-1) myright=NULL;
        else myright=new Node(r);

        p->left=myleft;
        p->right=myright;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
       
        
    }
    
    return root;
}

int sum_of_nodes_withoutleaf(Node* root){
    int sum=0;
    if(root==NULL) return 0;
    if(root->left!=NULL || root->right!=NULL){
        sum=sum+root->val;
    }
    int l=sum_of_nodes_withoutleaf(root->left);
   int r= sum_of_nodes_withoutleaf(root->right);

    return sum+l+r;
}



int main()
{   
    Node* root=create_binary();
    int result=sum_of_nodes_withoutleaf(root);
    cout<<result<<endl;
   
    return 0;
}