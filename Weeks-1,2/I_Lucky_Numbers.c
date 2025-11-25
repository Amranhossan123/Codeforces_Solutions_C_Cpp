#include<stdio.h>
int main()
{
    int n,mod,x;
    scanf("%d",&n);
    while(n!=0){
        mod=n%10;
        x=n/10;
        if(mod%x==0 || x%mod==0){
            printf("YES");
            break;
        }
        else{
            printf("NO");
            break;
        }
    }
    return 0;
}