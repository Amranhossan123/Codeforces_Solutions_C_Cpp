#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<long long int>pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+v[i];
    }
    sort(pre.begin(),pre.end(),greater<long long int>());
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    return 0;
}