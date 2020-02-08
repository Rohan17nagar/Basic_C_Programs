/******************************************************************************
Question : Given two arrays, multiply first element of first array with last element of 
second array then second element with second last and so on and add them.
---------------------------------------------------------------------------------------

Enter the array size: 4

arr1: 1 2 3 4                                                                                                                                                          
arr2: 1 2 3 4

-----------------------
OUTPUT: 20  

*******************************************************************************/
#include <stdio.h>
int main()
{
   int i,sum=0;
   int arr1[100],arr2[100];
   int num;
   printf("Enter the size:");
   scanf("%d",&num);
   for(i=0;i<num;i++){
       scanf("%d",&arr1[i]);
   }
   
   for(i=0;i<num;i++){
       scanf("%d",&arr2[i]);
   }
   
    for(i=0;i<num;i++){
        sum = sum+arr1[i]*arr2[num-1-i];
    }
    printf("%d",sum);
    return 0;
}

