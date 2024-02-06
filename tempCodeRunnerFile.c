#include <stdio.h>
void main(){

    int size ,i;
    int arr[100];
    int position , value;


    printf("Enter the array size: ");
    scanf("%d" , &size);

    printf("Enter the %d array elements :" , size);
    for( i = 0 ; i < size; i++)
    scanf("%d" , &arr[i]);

    printf("Enter the position where to insert the new element:");
    scanf("%d" ,&position);


    printf("Enter the value :");
    scanf("%d" ,&value);

    for( i = size-1 ; i > position-1; i++){
        arr[i+1] = arr[i];
    }

    arr[position-1] = arr[value];

    for( i =0 ; i<= size; i++){
        printf("%d" , arr[i]);
    }
}
