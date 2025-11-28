#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int pri_sum=0,sec_sum=0,to_sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                pri_sum=pri_sum+arr[i][j];
            }else if((i+j)==(n-1)){
                sec_sum=sec_sum+arr[i][j];
            }
        }
    }
    to_sum=abs(pri_sum-sec_sum);
    printf("%d",to_sum);
    


    return 0;
}