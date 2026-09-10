#include <stdio.h>

int main(void)
{
    int arr[100], i, cnt = 0, max;
    int *pa = arr;


    for (i = 0; i < 100; i++)
    {
        scanf(" %d", (pa + i));
        
        if (*(pa + i) == 0)
        {
            break;
        }

        cnt += 1;
    }

    max = *pa;
    for (i = 1; i < cnt; i++)
    {
        if (max < *(pa + i))
        {
            max = *(pa + i);
        }
    }

    printf("%d", max);
}