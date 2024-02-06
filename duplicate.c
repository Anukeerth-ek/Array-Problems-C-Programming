#include<stdio.h>
void main(){
    
    int limit,i;
    int arr[1000],j;
    int count;
    printf("Enter the array limit:");
    scanf("%d",&limit);

    printf("Enter the %d array elements:",limit);
    for(i =  0; i < limit; ++i)
    scanf("%d", &arr[i]);

    for(i=0; i<limit; ++i){
        for(j=i+1; j<limit; j++){
            if(arr[i]==arr[j]){
                count++;

            }
        }
    }
    printf("Total no.of duplicated elements are: %d",count);

}