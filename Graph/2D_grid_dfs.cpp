#include<bits/stdc++.h>
using namespace std;
int n,m;
char matrix[105][105];
bool visit[105][105];
vector<pair<int,int>>d={{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i,int j){
    if(i>=n || i<0 || j>=m || j<0){
        return false;
    }
    return true;
}

void dfs_2d(int si,int sj){
    cout<<si<<" "<<sj<<endl;
    visit[si][sj]=true;
    for(int i=0;i<4;i++){
        int ci=si+d[i].first;
        int  cj=sj+d[i].second;
        if(!visit[ci][cj] && valid(ci,cj)){
            dfs_2d(ci,cj);
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
    dfs_2d(si,sj);
    return 0;
}