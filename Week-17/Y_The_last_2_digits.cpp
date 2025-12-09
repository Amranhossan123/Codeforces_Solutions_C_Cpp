#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,c,d;
    cin>>a>>b>>c>>d;
   int result=1;
   result=result*(a%100)%100;
   result=result*(b%100)%100;
   result=result*(c%100)%100;
   result=result*(d%100)%100;
  
   cout<<setfill('0')<<setw(2)<<result<<endl;
   
    
    return 0;
}