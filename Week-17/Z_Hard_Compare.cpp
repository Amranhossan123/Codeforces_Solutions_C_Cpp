#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
   double result1=b*log(a);
   double result2=d*log(c);
    
    if(result1>result2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}