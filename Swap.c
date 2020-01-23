#include <stdio.h>
int main()
{
    //swapping of two numbers without using third variable..
    int num,a,b;
    printf("enter the two numbers : a and b :\n");
    scanf("%d%d",&a,&b);
    //let's swap them without using third variable
    a = a+b;  
    b = a-b;
    a = a-b;
    printf("a is : %d and b is :%d",a,b);
    return 0;
}
