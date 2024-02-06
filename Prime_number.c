#include<stdio.h>
void main(){

    int size,arr[50],i,j;

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements",size);
    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

    printf("Prime numbers are: ");

    for(i=0; i<size; i++){
        int flag=0;
        for(j=2; j<arr[i];j++){
            if(arr[i]%j==0){
                    
                    flag=1;
                    break;
            }
                          
        }
        if(flag==0){
            printf("%d",arr[i]);
        }
    }
}