#include<stdio.h>
void main(){

    int size,i,arr[50],arr1[50],k=0;

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

    for(i=0;i<size;i++)
    arr[size-1-i]=arr[i];
    
    
    for(i=0; i<size;i++)
    printf("%4d",arr[i]);

}