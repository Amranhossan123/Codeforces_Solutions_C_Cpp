#include<stdio.h>
long long int fac(int n){
    if(n==0){
        return 1;
    }
    long long int mul=fac(n-1);
    return mul*n;

}

int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int result=fac(n);
    printf("%lld",result);
    return 0;
}