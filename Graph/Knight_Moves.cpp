#include<bits/stdc++.h>
using namespace std;
int n,m;
bool visit[105][105];
int level[105][105];
vector<pair<int,int>>v= {{2,-1},{1,-2},{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2}};

bool valid(int i,int j){
    if(i<0 || i>=n || j<0 ||j>=m){
        return false;
    }
    return true;
}

void bfs(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    visit[si][sj]=true;
    level[si][sj]=0;
    while (!q.empty())
    {
        pair<int,int>par=q.front();
        q.pop();
        int par_i=par.first;
        int par_j=par.second;
        for(int i=0;i<8;i++){
            int ci=par_i+v[i].first;
            int cj=par_j+v[i].second;
            if(valid(ci,cj) && !visit[ci][cj]){
                q.push({ci,cj});
                visit[ci][cj]=true;
                level[ci][cj]=level[par_i][par_j]+1;
            }
        }
    }
    
}

int main()
{
    int test;
    cin>>test;
    while(test--){
        cin>>n>>m;

        memset(visit,false,sizeof(visit));
        memset(level,-1,sizeof(level));
        int si,sj,di,dj;
        cin>>si>>sj;
        bfs(si,sj);
        cin>>di>>dj;
        cout<<level[di][dj]<<endl;

    }
    
    
    return 0;
}