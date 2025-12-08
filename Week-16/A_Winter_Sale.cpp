#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,p;
    cin>>x>>p;
    float value=(100*p)/(100-x);
    cout<<fixed<<setprecision(2)<<value<<endl;
    return 0;
}