#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cin>>day;
    int years=day/365;
    int Year_days=day%365;
    int months=Year_days/30;
    int days=Year_days%30;
    cout<<years<<" years"<<endl<<months<<" months"<<endl<<days<<" days";
    return 0;
}