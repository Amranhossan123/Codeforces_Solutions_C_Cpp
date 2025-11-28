#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    int is_zero=true;
    if(n==m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j){
                    if(arr[i][j]!=1){
                        is_zero=false;
                        break;
                    }
                } 
                else if((i+j)==(n-1)){
                    if(arr[i][j]!=1){
                        is_zero=false;
                        break;
                    }
                } else if(arr[i][j]!=0){
                    is_zero=false;
                    break;
                }
                    
                }
        }
    }else{
        is_zero=false;
    }
    if(is_zero==true){
        printf("YES");
    } else{
        printf("NO");
    }


    return 0;
}