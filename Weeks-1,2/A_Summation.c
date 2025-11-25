#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
     long long int arr[n+1];
    for(long long int i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
    }
    long long int sum=0;
    for(long long int j=1;j<=n;j++){
        sum=sum+arr[j];
    }
    if(sum<0){
        sum=sum*(-1);
    }
    printf("%lld",sum);
    return 0;
}