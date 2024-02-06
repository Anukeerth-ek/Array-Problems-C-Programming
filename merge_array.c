#include<stdio.h>
void main(){
    
    int size1,size2,i,j,k;
    int arr1[50],arr2[50],merge[50];

    printf("Enter the array size: ");
    scanf("%d",&size1);

    printf("Enter the %d array elements for array1: ",size1);
    for(i=0; i<size1; i++){     
    scanf("%d",&arr1[i]);
    merge[i]=arr1[i];
    }
    k=i;

    printf("Enter the %d array elements for array2: ");
    scanf("%d",&size2);

    printf("Enter the %d array elements for array2: ",size2);   
    for(i=0; i<size2; i++){

    scanf("%d",&arr2[i]);
    merge[k]=arr2[i];
    k++;
    }

    for(i=0; i<k; i++){
        printf("%d",merge[i]);
    }

    


}