#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float sum=0.0;
    for(int i=1;i<=n;i++){
        sum=(sum+i+0.5);
    }
    printf("%.1f",sum);
    return 0;
}