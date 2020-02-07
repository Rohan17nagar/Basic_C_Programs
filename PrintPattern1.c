    /*
        print this pattern..
        1
        12
        123
        1234
        12345
    */
#include<stdio.h>
int main(){
    int num;
    int i,j;
    printf("Enter a number you want to enter.");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=num;j++){
            if(j<=i){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    
    return 0;
}
