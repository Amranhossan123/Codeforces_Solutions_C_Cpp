#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    vector<long long int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<long long int>pre(n+1);
    pre[1]=v[1];
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+v[i];
    }
    long long int l,r,sum=0;
    while(q--){
        cin>>l>>r;
        if(l==1){
            sum=pre[r];
        }else{
            sum=pre[r]-pre[l-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}