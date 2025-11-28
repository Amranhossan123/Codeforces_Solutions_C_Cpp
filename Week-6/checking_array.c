#include <stdio.h>
#include <stdbool.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
bool dia=true,scl=true;
 if(row==col)   {
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                if(arr[i][j]!=arr[0][0]){
                    scl=false;

                }
            }
            else{
                if(arr[i][j]!=0){
                    dia=false;
                }
            }
        }
    }
    if(dia==true && scl==true){
        printf("this is unit matrix");
    }
 }
 else{
    printf("this is not unit matrix");
 }

}