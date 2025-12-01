#include<bits/stdc++.h>
using namespace std;
int main()      
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int total=a+b+c;
        if(total%3==0 && (total/3)>=b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}