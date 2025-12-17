#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e,queries;
    
    cin>>n>>e;
    vector<int>adj_list[n];
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[a].push_back(a);
    }
    cin>>queries;
    for(int i=0;i<queries;i++){
        int src,dis;
        cin>>src>>dis;
        bool found=false;
        for(int child:adj_list[src]){
            if(child==dis){
                found=true;
                break;
            }
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
