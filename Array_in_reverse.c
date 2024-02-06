#include <stdio.h>
void main()
{

    int size, i, arr[50];

    printf("Enter the array size: ");
    scanf("%d", &size);

    printf("Enter the %d array elements: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Reversed Array is: ");
    for (i = size - 1; i >= 0; i--)
        printf("%4d", arr[i]);
}