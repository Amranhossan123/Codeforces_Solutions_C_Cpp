#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char s;
    cin>>a>>s>>b;
    
    if(s=='+'){
         int result=a+b;
         cout<<result;
    }else if(s=='-'){
        int result=a-b;
        cout<<result;
    }else if(s=='*'){
        int result=a*b;
        cout<<result;
    }else{
       int result=a/b;
        cout<<result;
    }
    return 0;
}