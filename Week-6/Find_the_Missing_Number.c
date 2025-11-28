#include<stdio.h>
int main()
{
    long long int t,a,b,c;
    long long int m;
    scanf("%lld",&t);
    for(int i=1;i<=t;i++){
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        long long int mul=a*b*c;
        if(m%mul==0){
            printf("%lld\n",m/mul);
        }else if(m%mul!=0){
            printf("-1\n");
        }

    }

    return 0;
}