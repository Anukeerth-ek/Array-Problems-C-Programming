

#include <stdio.h>
void main(){

    int size, i,largest=0; 
    int arr[50];

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0;i<size; i++)
    scanf("%d",&arr[i]);
    
    for(i=0; i<size; i++){
        if(arr[i]>arr[i+1]){
            largest=arr[i];
        }

    }
        printf("Largest number is %d",largest);

}
