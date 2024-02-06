#include<stdio.h>
void main(){

    int size, i ,Second_largest ,j,k;
    int arr[50];

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(arr[i] > arr[j]){
                k=arr[i];
            }
        }
    }
    Second_largest=k;

    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                k=arr[i];
            }
            if(k < Second_largest){
                Second_largest=k;
            }
        }
    }
    printf("Second largest element is : %d",Second_largest);
}