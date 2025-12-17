#include<bits/stdc++.h>
using namespace std;
int parent[105];
int group_size[105];

int find(int node){
    if(parent[node]==-1)
        return node;
    int leader=find(parent[node]);
    parent[node]=leader;
    return leader;
}

void dsu_union(int node1,int node2){
    int leader1=find(node1);
    int leader2=find(node2);
    if(group_size[leader1]>group_size[leader2]){
        parent[leader2]=leader1;
        group_size[leader1]+=group_size[leader2];
    }else{
        parent[leader1]=leader2;
        group_size[leader2] +=group_size[leader1];
    }
}

int main()
{
    memset(parent,-1,sizeof(parent));
    memset(group_size,1,sizeof(group_size));
    dsu_union(0,1);
    dsu_union(1,2);
    dsu_union(4,1);
    dsu_union(5,4);
    
    for(int i=0;i<6;i++){
        cout<<i<<"->"<<parent[i]<<endl;
    }
    return 0;
}