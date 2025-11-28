#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int i=1;
    int j=n;
    if(n%2==0){
        while (i<j)
        {
                
            printf("%d ",arr[i]);
            printf("%d ",arr[j]);
            i++;
            j--;
          
            
        }
    
    } else{
        while (i<=j)
        {
                
            if(i!=j){
              printf("%d ",arr[i]);
              printf("%d ",arr[j]); 
            }
            else if(i==j){
                printf("%d",arr[i]);
            }
            i++;
            j--;
          
            
        }

    }


    return 0;
}