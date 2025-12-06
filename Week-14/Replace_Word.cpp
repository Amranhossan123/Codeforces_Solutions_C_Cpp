#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s,x;
        cin>>s>>x;
        
        while(1){
            int result=s.find(x);
            if(result!=-1){
                s.erase(result,x.size());
                s.insert(s.begin()+result,'#');
            }
         else{
            break;
        }
        }
        cout<<s<<endl;
    }

    return 0;
}