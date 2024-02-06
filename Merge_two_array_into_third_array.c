
#include <stdio.h>
void main()
{

    int size1, i, arr[50];
    int size2, arr2[50];
    int arr3[100], k = 0;
    printf("Enter the first array size: ");
    scanf("%d", &size1);
    printf("Enter the %d array elements: ", size1);
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr[i]);
        arr3[i] = arr[i];
    }
    k = i;
    printf("Enter the Second array size:");
    scanf("%d", &size2);
    printf("Enter the %d array elements: ", size2);
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
        arr3[k] = arr2[i];
        k++;
    }
    for (i = 0; i < k; i++)
    {
        printf("%d", arr3[i]);
    }

}