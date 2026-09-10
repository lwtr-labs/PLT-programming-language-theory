#include <stdio.h>

int main()
{
    int arr[5], i;
    int *pa = arr;

    for (i = 0; i < 5; i++)
    {
        scanf(" %d", (pa + i));
    }

    for (i = 0; i<5; i++)
    {
        printf("%d ", *(pa + i));
    }

    return 0;
}