#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
    long long int a,b,c;
    Edge(long long int a,long long int b,long long int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
long long int dis[1005];
long long int n,e;
vector<Edge>Edge_list;
bool IsNegative=false;
void bell_man(){
    for(long long int i=1;i<n-1;i++){
        for(auto ed:Edge_list){
            long long int a,b,c;
            a=ed.a;
            b=ed.b;
            c=ed.c;
            if(dis[a]!=LLONG_MAX && dis[a]+c <dis[b]){
                dis[b]=dis[a]+c;
            }

        }
    }
    for(auto ed:Edge_list){
        long long int a,b,c;
        a=ed.a;
        b=ed.b;
        c=ed.c;
        if(dis[a]!=LLONG_MAX && dis[a]+c <dis[b]){
            IsNegative=true;
            return;
        }

    }
}

int main()
{
    
    cin>>n>>e;
    while (e--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        Edge_list.push_back(Edge(a,b,c));
    }
    for(long long int i=1;i<=n;i++){
        dis[i]=LLONG_MAX;
    }
    long long int src;
    cin>>src;
    dis[src]=0;
    bell_man();
    if(IsNegative){
        cout<<"Negative Cycle Detected"<<endl;
        return 0;
    }
    long long int test;
    cin>>test;
    while(test--){
        long long int desti;
        cin>>desti;
        if(dis[desti]==LLONG_MAX){
            cout<<"Not Possible"<<endl;
        }else{
            cout<<dis[desti]<<endl;
        }
    }

    
    
    return 0;
}