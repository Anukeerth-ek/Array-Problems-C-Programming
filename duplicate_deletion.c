 #include<stdio.h>
 void main(){

    int size ,i , j;
    int arr1[100];
    int flag= 0 ;

    printf("Enter the array size:");
    scanf("%d" , &size);

    printf("Enter the %d array limit:" , size);
    for( i = 0 ; i < size; i++)
        scanf("%d" , &arr1[i]);
    


    for( i = 0; i < size; i++){
        for( j = i+1; j < size; j++){
            
            if(arr1[i] == arr1[j])
            printf("Duplicate element occur in this array is %d\n" ,arr1[i]);
        }
    }

    for( i = 0 ; i < size-1; i++ ){
        printf("After the removal of duplicate elements:" , arr1[i]);

    }

    
    

    
    
 }