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
    int m=n;
    int b=n-1;
    int a=b-1;
    int c=n-1;
    while(c!=0){
        if(arr[a]==0 && arr[b]!=0){
            int temp=arr[a];
            arr[a]=arr[b];
            arr[b]=temp;
        }
        b--;
        a--;
        c--;
    }
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}