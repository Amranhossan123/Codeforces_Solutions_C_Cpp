#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[1];
        x=1;
    for(int j=1;j<=n;j++){
        if(arr[j]<min){
            min=arr[j];
            x=j;
    }
}
printf("%d %d",min,x);
    return 0;
}