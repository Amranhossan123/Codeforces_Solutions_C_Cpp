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



vector<int> leaf_show_decentdent(Node* root){
    vector<int>v;
    if(root==NULL) return v;
    if(root->left==NULL && root->right==NULL){
        v.push_back(root->val);
        return v;
        
    }
    vector<int>left=leaf_show_decentdent(root->left);
   vector<int>right=leaf_show_decentdent(root->right);

   v.insert(v.end(),left.begin(),left.end());
   v.insert(v.end(),right.begin(),right.end());

   return v;
}



int main()
{   
    Node* root=create_binary();
    vector<int>v=leaf_show_decentdent(root);
    sort(v.begin(),v.end(),greater<int>());
    for(int i:v){
        cout<<i<<" ";
    }
    
    return 0;
}