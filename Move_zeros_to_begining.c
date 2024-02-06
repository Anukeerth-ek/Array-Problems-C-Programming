#include <stdio.h>
void main()
{

    int size, i;
    int arr[50], zeros[50], n_zeros[50];

    printf("Enter the array size:");
    scanf("%d", &size);

    printf("Enter the %d array elements:", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeros[i] = arr[i];
        }
        else
        {
            n_zeros[i] = arr[i];
        }
    }
    for (i = 0; i < size  ; i++)
    {
        printf("%d", arr[i]);
    }
}