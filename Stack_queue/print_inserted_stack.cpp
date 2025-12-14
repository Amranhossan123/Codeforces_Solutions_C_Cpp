#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    stack<int>s1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        s.push(val);
    }
    while(!s.empty()){
        s1.push(s.top());
        s.pop();
    }
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}