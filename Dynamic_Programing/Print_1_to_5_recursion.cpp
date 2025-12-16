#include<bits/stdc++.h>
using namespace std;
void rec(int a){
    if(a>5){
        return;
    }
    cout<<a<<endl;
    rec(a);
}
int main()
{
    rec(1);
   
    return 0;
}