#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool visit[1005];
int parent[1005];
void bfs(int source){
    queue<int>q;
    q.push(source);
    visit[source]=true;
    while(!q.empty()){
        int par=q.front();
        q.pop();
        for(int child:adj_list[par]){
            if(!visit[child]){
                q.push(child);
                visit[child]=true;
                parent[child]=par;
            }
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    memset(visit,false,sizeof(visit));
    memset(parent,-1,sizeof(parent));
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int source,disct;
    cin>>source>>disct;
    bfs(source);
    
    vector<int>v;
    int node=disct;
    while(node!=-1){
        v.push_back(node);
        node=parent[node];
    }

    reverse(v.begin(),v.end());

    for(int x:v){
        cout<<x<<" ";
    }
   
    return 0;
}