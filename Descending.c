#include<stdio.h>
void main(){

    int size, i,arr[50];
    int j,temp;

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

    printf("Array in Descending order is:");

    for(i=0;i<size;i++){
        for(j=i+1; j<size; j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }

    for(i=0; i<size; i++)
        printf("%4d",arr[i]);
}