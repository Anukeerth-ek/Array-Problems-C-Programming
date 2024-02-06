#include<stdio.h>
void main(){

    int limit,elements[1000],new_elements,new_position,i;
    printf("Enter the array limit:");
    scanf("%d",&limit);

    printf("Enter the %d array elements:",limit);
    for( i=0; i<limit; i++)
    scanf("%d", &elements[i]);

    printf("Enter the position where to insert your array elements :");
    scanf("%d", & new_elements);

    printf("Enter the position where to keep your new elements:");
    scanf("%d",&new_position);

    for(i=new_position-1; i<limit-1;i--){
        

    }

}