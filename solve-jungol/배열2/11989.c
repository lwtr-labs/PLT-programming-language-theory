#include <stdio.h>

int main()
{
    int arr[100] = { 0 };
    int i = 2;

    arr[0] = 100;
    scanf("%d", &arr[1]);

    while (1)
    {
        if (arr[i-2] - arr[i-1] < 0)
        {
            arr[i] = arr[i-2] - arr[i-1];
            break;
        }
        else
        {
            arr[i] = arr[i-2] - arr[i-1];
            i++;
        }

    }

    for (i = 0; i < 100; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d", arr[i]);
            return 0;
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }


}