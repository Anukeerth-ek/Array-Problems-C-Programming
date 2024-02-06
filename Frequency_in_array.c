
#include <Stdio.h>

void main()
{
    int limit, i, j, count;
    int arr[50];

    printf("Enter the limit:");
    scanf("%d", &limit);

    printf("Enter the %d array elements: ", limit);
    for (i = 0; i < limit; i++)

        scanf("%d", &arr[i]);

    for (i = 0; i < limit; i++)
    {
        count = 1;
        for (j = i + 1; j < limit; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }
        if (arr[i] != -1)
            printf("Frequency of %d occur in this array is: %d times\n", arr[i] ,count);
    } 
}