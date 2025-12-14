#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        stack<int>st;
        string s;
        cin>>s;
        for(char c:s){
            if(st.empty()==true){
                st.push(c);
            }
            else if(c=='1' && st.top()=='0'){
                st.pop();
            }else{
                st.push(c);
            }
        }
        if(st.empty()==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }

    
    return 0;
}