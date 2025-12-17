#include<bits/stdc++.h>
using namespace std;
int n,e;
long long int adj_matrix[105][105];
void floyd_warshall(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(adj_matrix[i][k] !=LLONG_MAX && adj_matrix[k][j]!=LLONG_MAX && adj_matrix[i][k]+adj_matrix[k][j] < adj_matrix[i][j]){
                    adj_matrix[i][j]=adj_matrix[i][k]+adj_matrix[k][j];
                }
            }
        }
    }

}

int main()
{
   
    cin>>n>>e;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                adj_matrix[i][j]=0;
            }else{
                adj_matrix[i][j]=LLONG_MAX;
            }
            
        }
    }
    while(e--){
        long long int a,b,c;
        cin>>a>>b>>c;
        adj_matrix[a][b]=min(adj_matrix[a][b],c);
    }
    floyd_warshall();
    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        if(adj_matrix[a][b]==LLONG_MAX){
            cout<<"-1"<<endl;
        }else{
            cout<<adj_matrix[a][b]<<endl;
        }
    }
    return 0;
}