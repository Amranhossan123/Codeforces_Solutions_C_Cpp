#include<bits/stdc++.h>
using namespace std;
char matrix[105][105];
bool visit[105][105];
int level[105][105];
vector<pair<int,int>>v={{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i,int j){
    if(i<0 || i>=n || j<0 ||j>=m){
        return false;
    }
    return true;
}

void bfs_2d(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    visit[si][sj]=true;
    level[si][sj]=0;
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        int p_first=p.first;
        int p_second=p.second;
        for(int i=0;i<4;i++){
            int ci=p_first+v[i].first;
            int cj=p_second+v[i].second;
            if(valid(ci,cj) && !visit[ci][cj] && matrix[ci][cj]=='*'){
                q.push({ci,cj});
                visit[ci][cj]=true;
                level[ci][cj]=level[p.first][p.second]+1;
            }
        }
    }
}

int main()
{
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    memset(visit,false,sizeof(visit));
    memset(level,0,sizeof(level));

    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    bfs_2d(si,sj);
    cout<<level[di][dj]<<endl;
    return 0;
}