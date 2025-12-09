#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if(x>='A' && x<='Z'){
        x=x+32;
        cout<<x;
    }else{
        x=x-32;
        cout<<x;
    }
    return 0;
}