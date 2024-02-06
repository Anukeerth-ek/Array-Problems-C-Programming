#include<stdio.h>
void main(){

    int limit = 3 , i , j , k ;


    for( i = 1; i <=limit; i++){
        for( j = 1; j<=limit*i; j++){
            
            if(j <=limit)
            printf("*");
        }
        printf("\n");
    
    for( k = 1; k <= limit-1*i ;k++){
        if( i ==3)
            break;
            else{
                printf("**");
            }
        printf("\n");
    }
    }

}