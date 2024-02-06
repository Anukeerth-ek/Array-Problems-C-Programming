#include<stdio.h>
void main(){

    int size , i,count ,j;
    int arr[50]; 

    printf("Enter the array size: ");
    scanf("%d", &size);

    printf("Enter the %d array elements: ", size);
    for(i=0; i<size; i++)
    scanf("%d",&arr[i]);

    for(i=0; i<size; i++){
        count=0;
        for(j=2; j<arr[i]; j++){
            if(arr[i]%j==0){
                count=1;
                if(arr[i]==1){
                     count=2;
            }
        }

        }
            if(count == 0)
                printf("Prime numbers are: %d\n",arr[i]);
                else
                    printf("%d is not a prime\n");
        }
    }


