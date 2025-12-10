#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index,val;
    cin>>index>>val;
    arr[n+1];
    for(int i=n-1;i>=index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=val;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}