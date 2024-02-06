#include<stdio.h>
void main(){
    int i,j,k=0,a[200],sum=0,limit,avg;
    printf("Enter the limit : \n");
    scanf("%d",&limit);
    printf("ENter the elements");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<limit;i++){
        if(a[i]%2==0){
            sum+=a[i];
            k++;
        }
    }
    avg=sum/k;
    printf("average is %d",avg);
    
}

