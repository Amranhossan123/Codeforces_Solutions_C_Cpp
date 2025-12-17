#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool visit[1005][1005];
int m,n;
vector<pair<int,int>>v={{0,1},{1,0},{0,-1},{-1,0}};
bool valid(int i,int j){
    if(i<0 || i>=m || j<0 ||j>=n){
        return false;
    }
    return true;
}

int dfs(int si,int sj){
    visit[si][sj]=true;
    int cnt=1;
    for(int i=0;i<4;i++){
        int ci=si+v[i].first;
        int cj=sj+v[i].second;
        if(valid(ci,cj) && !visit[ci][cj] && grid[ci][cj]=='.'){
            cnt+=dfs(ci,cj);
        }
    }
    return cnt;
}

int main()
{
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    memset(visit,false,sizeof(visit));
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!visit[i][j] && grid[i][j]=='.'){
               int area= dfs(i,j);
               pq.push(area);
            }
        }
    }
    if(pq.empty()) cout<<"-1"<<endl;
    else cout<<pq.top()<<endl;

    return 0;
}