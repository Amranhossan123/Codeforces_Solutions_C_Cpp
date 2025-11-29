#include<stdio.h>
int main()
{
    int n;
    int digit=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=digit;j++){
            printf("%d",j);
        }
        printf("\n");
        digit++;
    }
    int digit1=n-1;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=digit1;j++){
            printf("%d",j);
        }
        printf("\n");
        digit1--;
    }


    return 0;
}