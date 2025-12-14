#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    queue<int>q;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        s.push(val);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int val;
        cin>>val;
        q.push(val);
    }
    int flag=1;
    if(n==m){
        while(!s.empty() && !q.empty()){
            if(s.top()!=q.front()){
                flag=0;
                break;
            }else{
                s.pop();
                q.pop();
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}