#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        pq.push(val);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int user;
        cin>>user;
        if(user==0){
            int user_val;
            cin>>user_val;
            pq.push(user_val);
            cout<<pq.top()<<endl;
        }else if(user==1){
            cout<<pq.top()<<endl;
        }else if(user==2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()){
                    cout<<pq.top()<<endl;
                }else{
                    cout<<"Empty"<<endl;
                }
                
            }
            else{
                cout<<"Empty"<<endl;
            }
            
        }
    }

    return 0;
}