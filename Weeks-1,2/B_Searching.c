#include<stdio.h>
int main()
{
    int n,val,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&val);
    for(int j=0;j<n;j++){
        if(val==arr[j]){
            printf("%d",j);
            count++;
            break;
        }
    }
    if(count==0){
        printf("-1");
    }
    return 0;
}