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
    int search_value,left,right;
    cin>>search_value;
    left=0;
    right=n-1;
    int flag=0;
    int index;
    while(left <= right){
        int mid=(left+right)/2;
        if(arr[mid]==search_value){
            index=mid+1;
            flag=1;
            break;
        }else if(arr[mid] < search_value){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    if(flag==1){
        cout<<"found item "<<index<<" location"<<endl;
    }else{
        cout<<"item not found"<<endl;
    }
    return 0;
}