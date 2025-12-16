#include<bits/stdc++.h>
using namespace std;
int knapsack(int n,int W,vector<int>&weight,vector<int>&values){
    vector<int>dp(W+1,0);
    for(int i=0;i<n;i++){
        for(int j=W;j>=weight[i];j--){
            dp[j]=max(dp[j],values[i]+dp[j-weight[i]]);
        }
    }
    return dp[W];
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,W;
        cin>>n>>W;
        vector<int>weight(n);
        vector<int>values(n);
        for(int i=0;i<n;i++){
            cin>>weight[i];
        }
        for(int i=0;i<n;i++){
            cin>>values[i];
        }
        cout<<knapsack(n,W,weight,values)<<endl;
    }
    
    return 0;
}