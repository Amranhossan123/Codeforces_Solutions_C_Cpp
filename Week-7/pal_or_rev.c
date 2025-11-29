#include<stdio.h>
int main()
{
    int n,real,copy=0;
    scanf("%d",&n);
    real=n;
    while (n!=0)
    {
        int rem=n%10;
        copy=copy*10+rem;
        n=n/10;
    }
    printf("%d\n",copy);
    if(copy==real){
        printf("palindrome");
    }else{
        printf("is not palindrome");
    }
    
    return 0;
}