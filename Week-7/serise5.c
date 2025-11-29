#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=1;
    for(int i=2;i<=n;i+=2){
        sum=sum*i;
    }
    printf("%d",sum);
    return 0;
}