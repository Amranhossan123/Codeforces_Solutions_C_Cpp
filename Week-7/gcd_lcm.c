#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int num1=n1;
    int num2=n2;
    while (n2!=0)
    {
        int temp=n1%n2;
        n1=n2;
        n2=temp;
    }
    printf("%d\n",n1);
    int lcm=(num1*num2)/n1;
    printf("%d",lcm);
    
    return 0;
}