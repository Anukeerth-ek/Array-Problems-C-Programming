
#include<stdio.h>
void main(){
    
    int size,i,count,j;
    int arr[50];

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

    for(i=0; i<size; i++){
        count=1;
        for(j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                count++;  
                arr[j]=-1;
            }        
        }
        if(arr[i]!=-1)
        printf("Frequency of %d is %d\n",arr[i], count);
    }
}