#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    queue<string>q;
    for(int i=0;i<test;i++){
        int x;
        cin>>x;
        if(x==0){
            string s;
            cin>>s;
            q.push(s);
        }else if(x==1){
            if(q.empty()==true){
                cout<<"Invalid"<<endl;
            }else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    
    return 0;
}