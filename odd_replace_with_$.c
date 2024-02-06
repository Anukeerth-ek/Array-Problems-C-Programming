#include<stdio.h>
void main(){

    int size , i, arr[50];
   
    printf("Enter the array size: ");
    scanf("%d" ,&size);


    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

    for(i=0; i<size; i++){
        if(arr[i]% 2!=0){
            arr[i]=2;
        }
    }
    printf("The reversed array list is: ");
    for(i=size ; i>=0; i--){
        printf("%d",arr[i]);
    }

}