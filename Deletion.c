
#include<stdio.h>
void main(){

    int limit,arr[1000],position,i;
    printf("Enter the limit:");
    scanf("%d", &limit);

    printf("Enter the %d array elements\n",limit);
    for(i=0;i<limit;i++){
    scanf("%d", &arr[i]);
    }

    printf("Enter the array position which you want to delete:");
    scanf("%d", &position);
    

    for(i=position-1; i<limit; i++){
        arr[i]=arr[i+1];
    }

    printf("Updated array list is :\n");
    for(i=0; i<limit-1;i++)
    printf("%d",arr[i]);
}






















