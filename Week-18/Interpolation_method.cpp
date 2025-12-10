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
    int low,high,search_item,pos;
    cin>>search_item;
    low=0;
    high=n-1;
    while(low <=high && arr[low] <=search_item && arr[high] >= search_item){
        if(low==high){
            if(arr[low]==search_item){
                cout<<"item found "<<low+1 <<" location"<<endl;
                return 0;
            }else{
                cout<<"item not found"<<endl;
                return 0;
            }
        }
        pos=low+(double)(low-high)/(arr[low]-arr[high]) * (search_item-arr[low]);
        if(arr[pos]==search_item){
            cout<<"item found "<<pos+1<<" location"<<endl;
            return 0;
        }
        else if(arr[pos] < search_item){
            low=pos+1;
        }else{
            high=pos-1;
        }

        
    }
    cout<<"item is not found"<<endl;

    return 0;
}