#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        sort(arr,arr+n);
        int mn=arr[0];
        int mx=arr[n-1];
        if(mn%2==mx%2) cout<<0<<endl;
        else{
            int k=0;
            int cnt1=0;
            while(arr[k]%2!=mx%2){
                cnt1++;
                k++;
            }
            int m=n-1;
            int cnt2=0;
            while(arr[m]%2!=mn%2){
                cnt2++;
                m--;
            }
            cout<<min(cnt1,cnt2)<<endl;
        }

    }
    return 0;
}