#include <stdio.h>

int main(void)
{
    int arr[10], i;
    int result[7] = { 0 };
    int *pa = arr;
    int *pr = result;

    for (i = 0; i < 10; i++)
    {
        scanf(" %d", (pa + i));
    }

    for (i = 0; i < 10; i++)
    {
        *(pr + *(pa + i)) += 1;
    }

    for (i = 1; i < 7; i++)
    {
        printf("%d : %d\n", i, *(pr + i));
    }

    return 0;
}