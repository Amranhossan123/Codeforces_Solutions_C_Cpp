#include<stdio.h>
int main()
{
    int a=0,b=1,n;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    while (n!=0)
    {
        int result=a+b;
        printf("%d ",result);
        a=b;
        b=result;
        n--;
    }
    
    return 0;
}