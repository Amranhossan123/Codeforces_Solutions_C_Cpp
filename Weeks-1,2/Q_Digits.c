#include<stdio.h>
int main()
{
    int n,x;
   scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d\n",&x);
        if(x==0){
            printf("%d",x);
        }
        for(int j=x;j>0;j=j/10){
            printf("%d ",j%10);
        }
        printf("\n");

    }
    return 0;
}