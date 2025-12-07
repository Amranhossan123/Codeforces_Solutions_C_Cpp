#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}