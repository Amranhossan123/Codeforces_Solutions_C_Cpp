#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>q;
    int x;
    string s;
    cin>>x>>s;
    if(x==0){
        q.push(s);
    }
    cout<<q.front()<<endl;
    return 0;
}