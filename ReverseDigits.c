#include <stdio.h>
int main()
{
    //Reverse the digits of the number..
    int num,a,b,temp,length=0,i,sum=0,rem=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    temp = num;
    while(temp!=0){
        temp = temp/10;
        length++;
    }
    for(i=0;i<length;i++){
        rem = num%10;
        sum = sum*10+rem;
        num = num/10;
    }
    printf("Reverse of the number is: %d",sum);
    return 0;
}
