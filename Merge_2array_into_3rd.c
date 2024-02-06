#include<stdio.h>
void main(){

    int size ,i;
    int arr1[50];

    printf("Enter the array size: ");
    scan("%d",&size);

    printf("Enter the %d array elements for first array: ",size);
    for(i=0; i<size; i++)
    scanf("%d",&arr1[i]);

    printf("Enter the %d array elements for second array: ",size);


}