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
    int search_item;
    cin>>search_item;
    int flag=0;
    int index;
    for(int i=0;i<n;i++){
        if(arr[i]==search_item){
            flag=1;
            index=i+1;
            break;
        }
    }
    if(flag==1){
        cout<<"item found "<<index<<" location"<<endl;
    }else{
        cout<<"item not found"<<endl;
    }
    return 0;
}