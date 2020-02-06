#include <stdio.h>
#include <math.h>
int main(){
    int rem=0,num,dec=0,i;
    scanf("%d",&num);
    while(num!=0){
        rem = num%10;
        num = num/10;
        dec = dec + rem*pow(2,i);
        ++i;
    }
    printf("%d",dec);
    return 0 ;
}
