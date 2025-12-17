#include<bits/stdc++.h>
using namespace std;
char adj_matrix[1000][1000];
bool visit[1000][1000];
vector<pair<int,int>>v={{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i,int j){
    if(i<0 || i>=n || j<0 ||j>=m || adj_matrix[i][j]=='#'){
        return false;
    }
    return true;
}

bool bfs_2d(int si,int sj,int di,int dj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    visit[si][sj]=true;
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        int p_first=p.first;
        int p_second=p.second;
        if(p_first==di && p_second==dj) return true;
        for(int i=0;i<4;i++){
            int ci=p_first+v[i].first;
            int cj=p_second+v[i].second;
            if(valid(ci,cj) && !visit[ci][cj]){
                q.push({ci,cj});
                visit[ci][cj]=true;
                if(ci==di && cj==dj) return true;
            }
        }
    }
    return adj_matrix[di][dj];
}

int main()
{
    cin>>n>>m;
    int si,sj,di,dj;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>adj_matrix[i][j];
            if(adj_matrix[i][j]=='A'){
                si=i;
                sj=j;
            }
            if(adj_matrix[i][j]=='B'){
                di=i;
                dj=j;
            }
        }
    }

    if(si==-1 || di==-1){
        cout<<"NO"<<endl;
        return 0;
    }


    memset(visit,false,sizeof(visit));
    if(bfs_2d(si,sj,di,dj))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
    return 0;
}