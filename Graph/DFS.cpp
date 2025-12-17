#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool visit[1005];
void dfs(int source){
    cout<<source<<" ";
    visit[source]=true;
    for(int child:adj_list[source]){
        if(visit[child]==false){
            dfs(child);
        }
    }
    
}

int main()
{
    int n,e;
    cin>>n>>e;
    memset(visit,false,sizeof(visit));
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int source;
    cin>>source;
    dfs(source);

    return 0;
}