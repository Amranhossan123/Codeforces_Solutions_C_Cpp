#include<bits/stdc++.h>
using namespace std;
vector<int>adj_matrix[1005];
bool visit[1005];

void dfs(int source){
    visit[source]=true;
    for(int child:adj_matrix[source]){
        if(!visit[child]){
            dfs(child);
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        adj_matrix[a].push_back(b);
        adj_matrix[b].push_back(a);
    }
    memset(visit,false,sizeof(visit));
    int count=0;
    for(int i=0;i<n;i++){
        if(visit[i]==false){
            dfs(i);
            count=count+1;
        }
    }
    cout<<count;
    return 0;
}