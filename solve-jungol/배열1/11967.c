#include <stdio.h>

int main(void)
{
    int ary[100];
    int i, cnt = 0;

    for (i = 0; i<100; i++)
    {
        scanf(" %d", &ary[i]);


        if (ary[i] == 0)
        {
            break;
        }

        cnt += 1;
    }

    for (i = 1; i < cnt+1; i++)
    {
        if (i%2 == 0)
        {
            printf("%d ", ary[i-1]);
        }
    }
}