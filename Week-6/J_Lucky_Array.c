#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    int m_count=0;
    for(int i=0;i<n;i++){
        if(min==arr[i]){
            m_count++;
        }
    }
    if(m_count%2==0){
        printf("Unlucky");
    }
    else if(m_count%2!=0){
        printf("Lucky");
    }
    return 0;
}