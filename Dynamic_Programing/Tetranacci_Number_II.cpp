#include<bits/stdc++.h>
using namespace std;
long long int tetranacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 1;
    if(n==3) return 2;
    long long a=0,b=1,c=1,d=2;
    for(int i=4;i<=n;i++){
        long long int next=a+b+c+d;
        a=b;
        b=c;
        c=d;
        d=next;
    }
    return d;
}
int main()
{
    int n;
    cin>>n;
    cout<<tetranacci(n)<<endl;
    return 0;
}