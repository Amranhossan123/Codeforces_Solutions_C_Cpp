#include<stdio.h>
int main()
{
    long long int t,n;
    scanf("%lld",&t);
    for(long long int i=1;i<=t;i++){
        scanf("%lld",&n);
        long long int sum=1;
        if(n==0){
            sum=sum*1;
        }
        for(long long int j=1;j<=n;j++){
            sum=sum*j;
        }
        printf("%lld",sum);
        printf("\n");
    }
    
    return 0;
}