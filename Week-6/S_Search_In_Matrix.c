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
    int num,exit=true;
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]!=num){
                exit=false;
            }
            else if(arr[i][j]==num){
                exit=true;
                break;
            }
        }
    }
    if(exit==true){
        printf("will not take number");
    }
    else if(exit==false){
        printf("will take number");
    }
    return 0;
}