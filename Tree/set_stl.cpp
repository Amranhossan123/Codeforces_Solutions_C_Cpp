#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n;
    cin>>n;
    while(n){
        int val;
        cin>>val;
        s.insert(val);
        n=n-1;
    }
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<*it<<endl;
    // }
    if(s.count(4)){
        cout<<"ache"<<endl;
    }else{
        cout<<"nai"<<endl;
    }
    
    return 0;
}