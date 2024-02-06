#include<stdio.h>
void main(){

    int size; 
    int arr[100],odd[100] ,even[100];
    int i,j = 0 ,k = 0;


    printf("Enter the array size:");
    scanf("%d",&size);


    printf("Enter the %d array elements:",size);
    for( i = 0; i<size; i++)
    scanf("%d",&arr[i]);

    for( i = 0 ; i<size; i++)
    {
         if(arr[i]%2==0){
            even[j]=arr[i];
            j++;

         }
         else{
         odd[k]=arr[i];
         k++;
         }
           
    }
    printf("Odd numbers in the array are:");
    for( i = 0; i<j; i++){
        printf("%d ",odd[i]);
    }
    printf("\n");

    printf("Even numbers in the array are:");

    for( i = 0 ; i<k; i++){
        printf("%d ",even[i]);
    }

}