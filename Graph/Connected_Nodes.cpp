#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>adj_list[n];
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int src;
        cin>>src;
        if(adj_list[src].empty()){
            cout<<"-1"<<endl;
        }else{
            sort(adj_list[src].begin(),adj_list[src].end(),greater<int>());
            for(int x:adj_list[src]){
                cout<<x<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}