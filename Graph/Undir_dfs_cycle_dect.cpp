#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[105];
bool visit[105];
int pararr[105];
bool cycle;

void dfs(int src){
    visit[src]=true;

    for(int child :adj_list[src]){
        if(visit[child] && pararr[src]!=child){
            cycle=true;
        }
        if(!visit[child]){
            pararr[child]=src;
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
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visit,false,sizeof(visit));
    memset(pararr,-1,sizeof(pararr));
    cycle=false;
    for(int i=0;i<n;i++){
        if(!visit[i])
            dfs(i);
    }
    if(cycle) cout<<"cycle detect"<<endl;
    else cout<<"cycle not detect"<<endl;
    return 0;
}