#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int reverse=n;
    int palim=0;
    while (n!=0)
    {
        palim=palim*10+(n%10);
        n=n/10;
    }
    printf("%d\n",palim);
    if(palim==reverse){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}