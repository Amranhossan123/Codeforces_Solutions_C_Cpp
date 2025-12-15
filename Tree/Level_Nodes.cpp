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

void level_travese(Node* root,int idx){
    if(root==NULL){
        cout<<"Invalid"<<endl;
        return;
    }
    queue<pair<Node*,int>>q;
    q.push({root,0});
    bool found=false;

    while(!q.empty()){
        pair<Node*,int> p=q.front();
        Node* nodes=p.first;
        int level=p.second;
        q.pop();
        if(level==idx){
            cout<<nodes->val<<" ";
            found=true;
        }
        if(level>idx) break;

        if(nodes->left) q.push({nodes->left,level+1});
        if(nodes->right) q.push({nodes->right,level+1});

    }
    if(found==false) cout<<"Invalid";


}



int main()
{
    Node* root=input_binary();
    int idx;
    cin>>idx;
    level_travese(root,idx);
    return 0;
}