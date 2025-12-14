#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q,q1;
    stack<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        q.push(val);
    }
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
   while(!s.empty()){
        q1.push(s.top());
        s.pop();
   }
   while(!q1.empty()){
    cout<<q1.front()<<" ";
    q1.pop();
   }
   
    return 0;
}