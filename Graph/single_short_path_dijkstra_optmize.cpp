#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj_list[105];
int path_dis[105];

void dijkstra(int src){
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});
    path_dis[src]=0;
    while(!pq.empty()){
        pair<int,int>par=pq.top();
        pq.pop();
        int par_val=par.second;
        int par_dis=par.first;
        for(auto child:adj_list[par_val]){
            int child_val=child.first;
            int child_dis=child.second;
            if(par_dis + child_dis < path_dis[child_val]){
                path_dis[child_val]=par_dis+child_dis;
                pq.push({path_dis[child_val],child_val});
            }
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b,c;
        cin>>a>>b>>c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }
    for(int i=0;i<n;i++){
        path_dis[i]=INT_MAX;
    }
    dijkstra(0);
    for(int i=0;i<n;i++){
        cout<<i<<" ->"<<path_dis[i]<<endl;
    }
    return 0;
}