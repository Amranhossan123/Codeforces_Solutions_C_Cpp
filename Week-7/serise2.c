#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i+=2){
        sum=sum+pow(i,4);
    }
    printf("%d",sum);
    return 0;
}