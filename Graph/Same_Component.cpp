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
void dfs(int si,int sj){
    visit[si][sj]=true;
    for(int i=0;i<4;i++){
        int ci=si+v[i].first;
        int cj=sj+v[i].second;
        if(valid(ci,cj) && !visit[ci][cj] && grid[ci][cj]=='.'){
            dfs(ci,cj);
        }
    }
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
    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    if(grid[si][sj]=='-' || grid[di][dj]=='-'){
        cout<<"NO"<<endl;
        return 0;
    }
    dfs(si,sj);
    if(visit[di][dj]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
