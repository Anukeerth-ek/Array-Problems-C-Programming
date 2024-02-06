#include<stdio.h>
void main(){

    int size,arr[50],i;
    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

  
    for(i=1; i<size; i++){
        if(arr[i]<0)
            arr[i]=0;
        printf("%d",arr[i]);
    }
    
}