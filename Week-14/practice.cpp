#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
  cin>>s;
  s.replace(2,2,"ll");
  cout<<s.find("ll")<<endl;
    return 0;
}