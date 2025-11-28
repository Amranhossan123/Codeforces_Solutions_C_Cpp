#include<stdio.h>
#include<limits.h>
int a_max(int arr[],int n,int i){
    if(i==n){
        return -1000000000;
    }
    int max=a_max(arr,n,i+1);
    if(max<arr[i]){
        max=arr[i];
    }
    

    return max;
}


int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=a_max(arr,n,0);
    printf("%d",result);
    return 0;
}