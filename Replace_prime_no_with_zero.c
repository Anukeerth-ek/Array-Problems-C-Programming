
#include<stdio.h>
void main(){

    int size,i,j,arr[50],flag;

    printf("Enter the limit: ");
    scanf("%d",&size);

    printf("Enter the %d array elements: ",size);
    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

    for(i=0; i<size;i++){
        flag=0;
        for(j=2; j<arr[i];j++){
            if(arr[i]%j==0){
                flag=1;
                break;
            }

                else{
                    
                arr[i]=0;
                
                }
               
            
        }
    if(flag==0)
        printf("%d",arr[i]);
    }
}