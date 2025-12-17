#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[105];
bool visit[105];
int pararr[105];
bool cycle;

void bfs(int src){
    queue<int>q;
    q.push(src);
    visit[src]=true;
    while(!q.empty()){
        int par=q.front();
        q.pop();
        for(int child:adj_list[par]){
            if(visit[child]&& pararr[par]!=child){
                cycle=true;
            }
            if(!visit[child]){
                q.push(child);
                visit[child]=true;
                pararr[child]=par;
            }

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
            bfs(i);
    }
    if(cycle){
        cout<<"cycle detect"<<endl;
    }else{
        cout<<"cycle not detect";
    }
    return 0;
}