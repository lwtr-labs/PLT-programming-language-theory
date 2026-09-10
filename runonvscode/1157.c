#include <stdio.h>

int main()
{
    int n, swap, i, arr[100] = { 0 };
    int temp;

    scanf("%d", &n);

    for (i = 0; i < n; i ++)
    {
        scanf(" %d", &arr[i]);
    }

    while (1)
    {
        swap = 0;

        for (i = 0; i < n-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                swap = 1;
            }
        }
        if (swap == 0)
        {
            break;
        }

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");
     

    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }            

    return 0;
}