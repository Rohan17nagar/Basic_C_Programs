#include<stdio.h>
int main(){
    int arr1[100][100],arr2[100][100],i,j,count=0;
    //first matrix..
    //row and columns..
    int row,col;
    int sum[100][100];
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr1[i][j]);
        }    
    }
    
    //second matrix..
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr2[i][j]);
        }    
    }
    
    //Addition of Two matrix..
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            sum[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
