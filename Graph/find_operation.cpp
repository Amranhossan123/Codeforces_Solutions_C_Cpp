#include<bits/stdc++.h>
using namespace std;
int parent[105];

int find(int node){

    while (parent[node]!=-1)
    {
        cout<<node<<" ";
        node=parent[node];
        cout<<endl;
    }
    return node;
    

}

int main()
{
    memset(parent,-1,sizeof(parent));
    parent[0]=1;
    parent[1]=-1;
    parent[2]=1;
    parent[3]=1;
    parent[4]=5;
    parent[5]=3;

    int result=find(4);
    cout<<result<<endl;
    return 0;
}