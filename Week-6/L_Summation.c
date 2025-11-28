#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    long long int sum=0;
    for(int j=1;j<=n;j++){
        sum=sum+arr[j];
    }
    printf("%lld",sum);
    return 0;
}