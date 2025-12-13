#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int n2=(a.size()+b.size());
    vector<int>c;
    for(int i=0;i<n;i++){
        c.push_back(b[i]);
    }
    for(int i=0;i<n;i++){
       c.push_back(a[i]);
    }
    for(int i=0;i<n2;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}