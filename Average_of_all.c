
#include<stdio.h>
void main(){

    int size,i,arr[50];
    double sum=0;

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0;i<size; i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
    }

    printf("Average is %f",sum/size);
    
}