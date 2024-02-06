#include<stdio.h>
void main(){

    int size ,i,sum=0;
    int arr[50];

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size );
    for(i=0; i<size;i++)
    scanf("%d",&arr[i]);

    for(i=0; i<size; i++){
        sum+=arr[i];
    }
    printf("Sum of all elements in this array are: %d",sum);
}