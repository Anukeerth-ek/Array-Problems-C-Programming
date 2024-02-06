

#include<stdio.h>
void main(){

    int size ,i,pos,new_value;
    int arr[50];

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

    printf("Enter the position where to insert:");
    scanf("%d",&pos);

    printf("Enter the array element :");
    scanf("%d",&new_value);

    for(i=size-1; i>=pos-1; i--)
    arr[i+1]=arr[i];

    arr[pos-1]=new_value;

    printf("New Array values are:");
    
    for(i=0; i<=size; i++)
    printf("%3d",arr[i]);
}