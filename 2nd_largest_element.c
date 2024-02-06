#include <stdio.h>
void main()
{

    int size, i, j, large;
    int arr[50];

    printf("Enter the array size:");
    scanf("%d", &size);

    printf("Enter the %d array elements:");
    for (i = 0; i < size; ++i)
        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                large = arr[i];
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        if (arr[i] > arr[j])
        {
        }
        large = arr[i];
    }

    for (i = 0; i < size; i++)
    {
    }
}
