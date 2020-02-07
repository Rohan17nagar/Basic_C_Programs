#include <stdio.h>
int main()
{
    int num,j,temp=0;
    int arr[1000],i;
    printf("Enter the array...\n");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(arr[j]>arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    printf("%d",arr[num-2]);
    
    
    
    return 0;
}
