#include<bits/stdc++.h>
using namespace std;
int n,m;
char matrix[1000][1000];
bool visit[1000][1000];
vector<pair<int,int>>d={{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i,int j){
    if(i>=n || i<0 || j>=m || j<0 || matrix[i][j]=='#'){
        return false;
    }
    return true;
}

int dfs_2d(int si,int sj){
    visit[si][sj]=true;
    int size=1;
    for(int i=0;i<4;i++){
        int ci=si+d[i].first;
        int  cj=sj+d[i].second;
        if(!visit[ci][cj] && valid(ci,cj)){
            size =size + dfs_2d(ci,cj);
        }
    }
    return size;
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
    vector<int>cell;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(valid(i,j) && !visit[i][j]){
                int cell_size=dfs_2d(i,j);
                cell.push_back(cell_size);
            }
        }
    }
    sort(cell.begin(),cell.end());
    for(int x:cell){
        cout<<x<<" ";
    }
    return 0;
}