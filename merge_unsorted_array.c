#include <stdio.h>
void main()
{
    int size, i;
    int arr1[50], arr2[50], merge[50];

    printf("Enter the array limit: ");
    scanf("%d", &size);

    printf("Enter the %d array elements: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr1[i]);

    printf("Enter the %d array elements: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr2[i]);

    for (i = 0; i < size * 2 - 2; i++)
    {
        merge[i] = arr1[i];
    }
}