#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int alpha=65;
    int space=n-1;
    //first pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",alpha);
        }
        printf("\n");
        space--;
        alpha++;
    }
    //second pattern
    int space1=1;
    int alpha1=64+(n-1);
    int digit=n-1;
    for(int i=n-1;i>0;i--){
        for(int j=1;j<=space1;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",alpha1);
        }
        printf("\n");
        space1++;
        alpha1--;
    }


    return 0;
}