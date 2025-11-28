#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    //first pattern print;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j%2!=0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
         printf("\n");
    }

    //second pattern print;
        for(int i=n-1;i>0;i--){
            for(int j=1;j<=i;j++){
                if(j%2!=0){
                    printf("1 ");
                }else{
                    printf("0 ");
                }
            }
            printf("\n");

      }


    return 0;
}