#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        float x_val,y_val;
        cin>>x_val>>y_val;
        float second=ceil(y_val/2.0);
        int result=second*15;
        int result2=x_val+(y_val*4);
        int result3=result-result2;
        if(result3 < 0){
            float result4=ceil(abs(result3)/15.0);
            int result5=second+result4;
            cout<<result5<<endl;
        }else{
            cout<<second<<endl;
        }
        
    }
    return 0;
}