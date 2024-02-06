#include<stdio.h>
void main(){
    
    int size ,i ,del_element;
    int arr[50];

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

    printf("Enter the position where you like to delete the element: ");
    scanf("%d", &del_element);

    for(i=del_element-1; i<=size-1; i++)
    arr[i]=arr[i+1];

    for(i=0; i<size-1; i++)
    printf("%d",arr[i]);

}