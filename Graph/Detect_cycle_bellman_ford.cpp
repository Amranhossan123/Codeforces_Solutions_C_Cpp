#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
    int a,b,c;
    Edge(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
vector<Edge>Edge_list;
int dis[1005];
int n,e;

void bellman_ford(){
    for(int i=0;i<n-1;i++){
        for(auto v:Edge_list){
            int a=v.a;
            int b=v.b;
            int c=v.c;
            if(dis[a]!=INT_MAX && dis[a]+c <dis[b]){
                dis[b]=dis[a]+c;
            }
        }
    }
    int flag=false;
    for(auto v:Edge_list){
        int a=v.a;
        int b=v.b;
        int c=v.c;
        if(dis[a]!=INT_MAX && dis[a]+c <dis[b]){
            flag=true;
        }
    }
    if(flag){
        cout<<"cycle detected weighted grap";
    }else{
        for(int i=0;i<n;i++){
            cout<<i<<"->"<<dis[i]<<endl;
        }
    }
}

int main()
{
    cin>>n>>e;
    while(e--){
        int a,b,c;
        cin>>a>>b>>c;
        Edge_list.push_back(Edge(a,b,c)); //directed
        // Edge_list.push_back(Edge(b,a,c))  undirected;
    }
    for(int i=0;i<n;i++){
        dis[i]=INT_MAX;
    }
    dis[0]=0;
    bellman_ford();

    return 0;
}