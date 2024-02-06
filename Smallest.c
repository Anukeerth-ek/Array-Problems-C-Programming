#include<stdio.h>
void main(){

    int size, i, arr[50];
    int sm ;

    printf("Enter the size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

    sm=arr[0];

    printf("Smallest Element is: ");
    
    for(i=0; i<size; i++){
        if(arr[i]<sm)
        sm=arr[i];
    }
    printf("%d ",sm);
}