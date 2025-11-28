#include <stdio.h>
long long int  vag(long long int n)
{
    if (n<=1)
    {
        return 0;
    }
    long long int result = vag(n / 2);
    
        return result + 1;
}

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int result = vag(n);
    printf("%lld", result);
    return 0;
}