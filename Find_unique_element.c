
#include<stdio.h>
void main(){
    
    int size, i,j ,count;
    int arr[50];

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

    for(i=0; i<size; i++){
         count=0;
        for(j=0; j<size; j++){
           
            if(arr[i]==arr[j]){
                count++;
        }
    }
        if(count==1)
        printf("Unique elements are: %d\n",arr[i]);
       
}


}