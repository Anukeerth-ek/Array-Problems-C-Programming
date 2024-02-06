#include<stdio.h>
void main(){

    int size,i,arr[50],flag,j;
    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0; i<size;i++)
    scanf("%d",arr[i]);

    for(i=0; i<size;i++){
        flag=0;
        for(j=2; j<arr[i];j++){
            if(arr[i]%j==0){
                flag=1;
                break;
            }
            
        }
        printf("%d",&arr[i]);
    }




}