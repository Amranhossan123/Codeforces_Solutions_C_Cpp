#include<stdio.h>
int main()
{
    int a=1,b=3,c=4,d=9,n;
    scanf("%d",&n);
    int sum=0;
    while (n>0)
    {
        sum=sum+ (a*b*c*d);
        a=a+1;
        b=b+2;
        c=c+2;
        d=d+9;
        n--;
    }
    printf("%d",sum);
    
    return 0;
}