#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool visit[1005];
int level[1005];

void bfs(int source){
    queue<int>q;
    q.push(source);
    visit[source]=true;
    level[source]=0;
    while(!q.empty()){
        int par=q.front();
        q.pop();
        for(int child:adj_list[par]){
            if(visit[child]==false){
                q.push(child);
                visit[child]=true;
                level[child]=level[par]+1;
            }
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;

    memset(visit,false,sizeof(visit));
    memset(visit,-1,sizeof(level));
    
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int source,disct;
    cin>>source>>disct;
    bfs(source);
    cout<<level[disct]<<endl;
    return 0;
}