#include<bits/stdc++.h>
using namespace std;
int n,m;
char matrix[105][105];
bool visit[105][105];
vector<pair<int,int>>v={{0,1},{0,-1},{1,0},{-1,0}};

bool valid(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m){
        return false;
    }
    return true;
}

void bfs_2d(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    visit[si][sj]=true;
    while(!q.empty()){
        pair<int,int> par=q.front();
        q.pop();
        int fir=par.first;
        int sec=par.second;
        cout<<fir<<" "<<sec<<endl;
        for(int i=0;i<4;i++){
            int ci=fir+v[i].first;
            int cj=sec+v[i].second;
            if(valid(ci,cj) && !visit[ci][cj]){
                q.push({ci,cj});
                visit[ci][cj]=true;
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
    int si,sj;
    cin>>si>>sj;
    bfs_2d(si,sj);
    return 0;
}