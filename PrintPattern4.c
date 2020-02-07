#include<stdio.h>
/*
Print this pattern..
Enter the number:
5
-----------------
OUTPUT:
-----------------
1                                                                                                                                             
121                                                                                                                                           
12321                                                                                                                                         
1234321                                                                                                                                       
123454321 
------------------
*/

int main(){
    int num;
    int i,j,k=0,value=0;
    printf("Enter the size that you want to enter:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=num*2-1;j++){
            if(j>=1 && j<=i+k){
                if(j<=i){
                    value++;
                    printf("%d",value);
                }
                else{
                    value--;
                    printf("%d",value);
                }
            }
            else{
                printf(" ");
            }
            
        } 
        value=0;
    
        k++;
        printf("\n");
    }
    return 0;
}
