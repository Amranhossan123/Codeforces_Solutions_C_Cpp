#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int first_max=INT_MIN;
        int first_index=-1;
        for(int i=0;i<n;i++){
            if(first_max<arr[i]){
                first_max=arr[i];
                first_index=i;
            }
        }
        int second_max=INT_MIN;
        int second_index=-1;
        for(int i=0;i<n;i++){
            if(first_index==i){
                continue;
            }
            else if(second_max<arr[i]){
                second_max=arr[i];
                second_index=i;
            }
        }
        if(first_index==-1 || second_index==-1){
            return 0;
        }else if(first_index <second_index){
            cout<<first_index<<" "<<second_index<<endl;
        }else{
            cout<<second_index<<" "<<first_index<<endl;
        }
        
    }
    return 0;
}