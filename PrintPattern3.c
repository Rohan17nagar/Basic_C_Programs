#include<stdio.h>
/*
Print this pattern..
Enter the number:
5
-----------------
OUTPUT:
-----------------
*
* * * 
* * * * *
* * * * * * *
* * * * * * * * *
------------------

*/

int main(){
    int num;
    int i,j,k=0;
    printf("Enter the size that you want to enter:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=num*2-1;j++){
            if(j>=1 && j<=i+k){
                printf("*");
                
            }
            else{
                printf(" ");
            }
        } 
        k++;
        printf("\n");
    }
    
    return 0;
}
