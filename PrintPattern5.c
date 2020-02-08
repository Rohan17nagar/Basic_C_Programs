/******************************************************************************
Question : PRINT THIS PATTERN: 
---------------------------------------------------------------------------------------
Enter the number:                                                                                                                                                  
4                                                                                                                                                                  
4                                                                                                                                                                  
55                                                                                                                                                                 
666                                                                                                                                                                
7777                                                                                                                                                               
666                                                                                                                                                                
55                                                                                                                                                                 
4                                                                                                                                                                  
*******************************************************************************/
#include <stdio.h>
int main()
{
    int num,i,j,k=0,value;
    printf("Enter the number:\n");
    scanf("%d",&num);
    value=num-1;
    for(i=1;i<=num*2;i++){
        if(i<=num){
            k++;  
        }
        else{
            k--;
        }
        for(j=1;j<=num;j++){
            
            if(j>=1 && j<=k){
                printf("%d",value+k);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
