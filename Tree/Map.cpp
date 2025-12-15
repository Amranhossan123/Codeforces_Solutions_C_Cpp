#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["jisan"]=3;
    mp["juma"]=5;
    mp["joy"]=8;
    mp["jibon"]=0;
    // cout<<mp["joy"]<<endl;
    // for(auto it=mp.begin(); it!=mp.end();it++){
    //     cout<<it->first<<" "<<it->second <<endl;;   
    // }

    if(mp.count("jibon")){
        cout<<"ache";
    }else{
        cout<<"nai";
    }

    return 0;
}