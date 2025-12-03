#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target,sum=0,flag=0;
    cin>>target;
    target=18;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;k<n-3;k++){
                for(int l=k+1;l<n;l++){
                    sum=arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==target){
                        cout<<"Yes";
                        flag=1;
                        break;
                    }
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(flag) break;
            }
        if(flag==0) cout<<"No";
    return 0;
}