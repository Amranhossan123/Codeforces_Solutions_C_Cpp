#include <bits/stdc++.h>
using namespace std;
class mystack
{

public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top(){
        return l.back();
    }
};
class myqueue
{

public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front(){
        return l.front();
    }
};
int main()
{
    mystack st;
    myqueue q;
    int m,n;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        st.push(val);
    }
    for(int i=0;i<m;i++){
        int val;
        cin>>val;
        q.push(val);
    }
    int flag=1;
    if(n!=m){
        cout<<"NO"<<endl;
    }else{
        while(n>0 && m>0){
            if(st.top()!=q.front()){
                flag=0;
                break;
            }
            st.pop();
            q.pop();
            n--;
            m--;
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }



    return 0;
}