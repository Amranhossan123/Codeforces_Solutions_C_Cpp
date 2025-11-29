#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    if(n==1){
        printf("co prime number");
    }
    else if(n==2 || n==3){
        printf("prime number");
    }else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                count++;
                break;
            }
        }
        if(count==0){
            printf("this is a prime number");
        }else{
            printf("this is not prime number");
        }
    }

    return 0;
}