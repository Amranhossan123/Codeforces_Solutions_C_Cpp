#include<stdio.h>
int main()
{
    int n;
    long long int sum=0;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    } 
    for(int i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }
    // int count=0;
    // for(int i=1;i<=n;i++){
    //     if(arr[i]<0){
    //         count++;
    //     }
    // }
    // if(count==n){
    // }else{
    //     if(k==1){
    //         sum=sum+arr[n];
    //     }
    //     else if(k==n){
    //         for(int i=1;i<=k;i++){
    //             sum=sum+arr[i];
    //         }
    //     }
    //     else{
    //         for(int i=k;i>=1;i--){
    //             sum=sum+arr[i];
    //         }
    //     }
    // }

    // printf("%lld",sum);

    return 0;
}