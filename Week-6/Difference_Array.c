#include<stdio.h>
#include<math.h>
int main()
{
    int n,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int arr[n], arr2[n],arr3[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++){
            arr2[i]=arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr2[i]>arr2[j]){
                    int temp=arr2[i];
                    arr2[i]=arr2[j];
                    arr2[j]=temp;
                }
            }
        }
        
        
        for(int i=0;i<n;i++){
            arr3[i]=abs(arr[i]-arr2[i]);
        }
        for(int i=0;i<n;i++){
            printf("%d ",arr3[i]);
        }
        printf("\n");
   
    }

    return 0;
}