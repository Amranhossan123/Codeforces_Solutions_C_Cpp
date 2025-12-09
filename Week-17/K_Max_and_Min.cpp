#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int min1=min({a,b,c});
    int max1=max({a,b,c});
    cout<<min1<<" "<<max1;
    return 0;
}