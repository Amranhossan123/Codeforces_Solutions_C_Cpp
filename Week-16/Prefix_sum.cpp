#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int prefix_sum[n+1];
    prefix_sum[1]=arr[1];
    for(int i=2;i<=n;i++){
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }
    for(int i=1;i<=n;i++){
        cout<<prefix_sum[i]<<endl;
    }
    int l,r;
    cin>>l>>r;
    int result;
    if(l==1){
        result=prefix_sum[r];
    }else{
         result=prefix_sum[r]-prefix_sum[l-1];
    }
    
    cout<<result<<endl;

    return 0;
}