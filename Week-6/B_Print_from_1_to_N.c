#include<stdio.h>
void rec(int n){
    if(n<1){
        return;
    }
    rec(n-1);
    printf("%d\n",n);
    
}

int main()
{
    int n;
    scanf("%d",&n);
    rec(n);
    return 0;
}