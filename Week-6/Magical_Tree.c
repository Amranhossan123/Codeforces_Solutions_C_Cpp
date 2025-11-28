#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int line=6;
    int pattern=1;
    if(n%2!=0){
        int m=n/2;
        line=line+m;
        int space=line-1;
        for(int i=1;i<=line;i++){
            for(int j=1;j<=space;j++){
                printf(" ");
            } 
            for(int j=1;j<=pattern;j++){
                printf("*");
            }
            printf("\n");
            pattern+=2;
            space--;
        }
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}