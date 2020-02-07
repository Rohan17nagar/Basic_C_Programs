#include<stdio.h>
/*
Print this pattern..
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

int main(){
    int num;
    int i,j,k;
    printf("Enter the size that you want to enter:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        k=i;
        for(j=1;j<=num;j++){
            if(j<=i){
                printf("%d",k);
                k--;
            }
            else{
              printf(" ");  
            }
        }
        printf("\n");
    }
    return 0;
}
