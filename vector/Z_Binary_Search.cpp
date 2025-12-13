#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    
    while (q--)
    {   
        int flag=0;
        int x;
        cin>>x;

        int l=1;
        int r=n;
        while(l<=r){
           int  mid=(l+r)/2;
            if(v[mid]==x){
                flag=1;
                break;
            }
            else if(v[mid]<x){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        if(flag==1){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }

    
    
    
    return 0;
}