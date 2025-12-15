#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        map<string,int>mp;
        string mostword;
        int maxcount=0;
        while(ss>>word){
            int countnow=++mp[word];
            if(countnow > maxcount){
                maxcount=countnow;
                mostword=word;
            }
        }
        cout<<mostword<<" "<<maxcount <<endl;

    }
 

    return 0;
}