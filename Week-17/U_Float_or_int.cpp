#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin>>x;
    int int_part=(int)(x);
    float float_part=x-int_part;
    if(float_part==0){
        cout<<"int "<<int_part;
    }else{
        cout<<"float "<<int_part<<" "<<fixed<<setprecision(3)<<float_part;
    }
    return 0;
}