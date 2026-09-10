#include <stdio.h>

int main(void)
{
    int arr[5], i, sum;
    int *pa = arr;

    for (i = 0; i < 5; i++)
    {
        scanf("%d ", (pa + i));
    }

    sum = *(pa) + *(pa + 2) + *(pa + 4);

    printf("%d", sum);

    return 0;
}