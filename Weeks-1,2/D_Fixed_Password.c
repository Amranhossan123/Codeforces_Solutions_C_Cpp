#include<stdio.h>
int main()
{
    int x,n;
    x=1999;
    for(;scanf("%d",&n) ;){
        if(n==x){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    return 0;
}