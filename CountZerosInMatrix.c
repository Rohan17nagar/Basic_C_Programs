/******************************************************************************
Matrix Problems in C..
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,arr[100][100],count=0,j;
    printf("Enter the number of Rows / Cols");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
        
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==0){
                count++;
            }
        }
    }
    printf("Number of Zeros are:%d",count);
    
    return 0;
}
