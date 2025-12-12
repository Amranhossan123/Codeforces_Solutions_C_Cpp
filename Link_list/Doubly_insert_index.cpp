#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    list<int>l;
    for(int i=0;i<test;i++){

        int idx,val;
        cin>>idx>>val;
        if(idx==0){
            l.push_front(val);
            for(int value:l){
                cout<<value<<" ";
            }
            cout<<endl;
            for(auto it=l.rbegin();it!=l.rend();it++){
                cout<<*it<<" ";
            }
            cout<<endl;
        }
        else if(idx == l.size()){
            l.push_back(val);
            for(int value: l){
                cout<<value<<" ";
            }
            cout<<endl;
            for(auto it=l.rbegin();it!=l.rend();it++){
                cout<<*it<<" ";
            }
            cout<<endl;
        }
        else if(idx < l.size()){
            auto first=l.begin();
            advance(first,idx);
            l.insert(first,val);
            for(int value : l){
                cout<<value<<" ";
            }
            cout<<endl;
            for(auto it=l.rbegin();it!=l.rend();it++){
                cout<<*it<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"Invalid"<<endl;
        }
    
    }
    return 0;
}