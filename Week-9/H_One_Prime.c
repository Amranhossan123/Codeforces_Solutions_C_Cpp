#include<stdio.h>
int main()
{
    int n;
    int count=0;
    scanf("%d",&n);
    if(n==2 || n==3){
        printf("YES");
        return 0;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                count++;
                break;
            }

        }
    }
    if(count==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}