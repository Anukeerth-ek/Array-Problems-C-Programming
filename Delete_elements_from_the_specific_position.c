
#include<stdio.h>
void main(){

    int size, i, del_elements,temp;
    int arr[50];

    printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter the %d array elements: \n",size);
    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

    for(i=0; i<size; i++){
        printf("Array elements are %d\n", arr[i]);
    }

    printf("Enter the position to delete the elements: ");
    scanf("%d",&del_elements);

    for(i=del_elements-1; i<size-1;i++){
        arr[i]= arr[i+1];
    }

    printf("After");


    for(i=0; i<size-1; i++)
    printf("%d",arr[i]);



}