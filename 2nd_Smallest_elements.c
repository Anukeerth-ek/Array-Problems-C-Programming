#include<stdio.h>
void main(){

    int limit , i, j ,temp=0;
    int arr[100];
    int smallest, second_smallest;

    printf("Enter the array limit:");
    scanf("%d",&limit);

    printf("Enter the %d array elements:" , limit);
    for(int i=0; i<limit; ++i)
    scanf("%d",&arr[i]);

    for(i=0; i<limit; ++i){
        for(j=i+1; j<limit; ++j){
            if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=arr[i];

            }
        }
    }
    for(i=0; i<limit; ++i){
     smallest= arr[0];
     second_smallest= arr[1];


    }
    printf(" Second smallest element in the array is : %d" , second_smallest);

    

    
}