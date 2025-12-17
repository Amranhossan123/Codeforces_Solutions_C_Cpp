#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool visit[1005];

void bfs(int source){
    queue<int>q;
    q.push(source);
    visit[source]=true;
    while(!q.empty()){
        int par=q.front();
        q.pop();
        cout<<par<<" ";
        for(int child:adj_list[par]){
            if(visit[child]==false){
                q.push(child);
                visit[child]=true;
            }

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

    bfs(0);

    return 0;
}