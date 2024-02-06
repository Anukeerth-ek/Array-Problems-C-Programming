#include<stdio.h>
void main(){

    int limit,i,arr1[1000],arr2[1000],j,sum=0;
   


    printf("Enter the array limit:");
    scanf("%d",&limit);

    printf("Enter the first array elements:");
    for(i=0;i<limit;i++)
       scanf("%d",arr1[i]);

    

    printf("Enter the second array elements:");
    for(j=0;j<limit;j++)
    scanf("%d",arr2[j]);



    for(i=0; i<limit; i++){
        for(j=0 ; j<limit; ++j){
            sum=arr1[i]+arr2[j];

            printf("Sum of the entered array is :%d",sum);


        }
    }

}