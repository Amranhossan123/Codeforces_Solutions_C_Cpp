#include<bits/stdc++.h>
using namespace std;
int parent[105];

int rec(int node){
    if(parent[node]==-1)
        return node;
   int pnode=parent[node];
    int leader=rec(pnode);
    parent[node]=leader;
    return leader;
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

    int result=rec(4);
    for(int i=0;i<6;i++){
        cout<<i<<"->"<<parent[i]<<endl;
    }
    cout<<result<<endl;
    return 0;
}