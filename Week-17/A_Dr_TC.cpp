#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        int cnt=0;
        for(char x:s){
            if(x=='1'){
                cnt++;
            }
        }
        for(char y:s){
            if(y=='1'){
                ans+=cnt-1;
            }else{
                ans+=cnt+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}