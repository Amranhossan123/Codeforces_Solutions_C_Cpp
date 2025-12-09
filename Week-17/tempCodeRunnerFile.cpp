#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int  result1=pow(a,b/b);
    long long int result2=pow(c,d/d);
    
    if(result1>result2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    //8376260 70 8376259 70
    return 0;
}