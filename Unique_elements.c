#include<stdio.h>
void main(){

    int limit ,i ,j;
    int arr[100], unique_elements;

    printf("Enter the array limit:");
    scanf("%d",&limit);

    printf("Enter the %d array elements:",limit);
    for(i=0;i<limit;i++)
    scanf("%d",&arr[i]);


    printf("Unique elements are:");
    for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){

            if(arr[i]!=arr[j]){
                unique_elements=arr[i];

            }
                printf("%d",unique_elements);
     
   
    }
    }

}