#include<stdio.h>
void main(){

    int size, i, arr[50];

    printf("Enter the size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ", size);
    for(i=0; i< size; i++)
    scanf("%d",&arr[i]);

    for(i=0; i< size ; i++){
        if(arr[i] <0)
        arr[i] = 0;
    }

    for(i=0; i<size ; i++){
        printf("%4d", arr[i]);
    }

}