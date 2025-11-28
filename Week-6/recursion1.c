#include<stdio.h>
void arrprint(int n,int arr[],int i){
    if(i==n){
        return;
    }
    printf("%d\n",arr[i]);
    arrprint(n,arr,i=i+1);
}

int main()
{
    int n,j=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    arrprint(n,arr,j);
    return 0;
}