#include<bits/stdc++.h>
using namespace std;
class Mystack{
    public:
    list<int>l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};

int main()
{
    Mystack s;
    Mystack s2;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        s.push(val);
    }
    for(int i=0;i<m;i++){
        int val;
        cin>>val;
        s2.push(val);
    }
    int flag=1;
    if(n==m){
        while(!s.empty() && !s2.empty()){
            if(s.top()!=s2.top()){
                flag=0;
                break;
            }else{
                s.pop();
                s2.pop();
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO";
    }


    
    return 0;
}