/******************************************************************************
Finding minimum and maximum elements in the array...
*******************************************************************************/
#include <stdio.h>

int main()
{
    //printing all leaders in array..
    int num,min,max;
    int i;
    int size = 5;
    int arr[100];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for(i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }    
    printf("max is %d and min is %d",max,min);
    return 0;
}
