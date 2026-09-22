#include <stdio.h>

int main(void)
{
    int i, cnt = 0;
    int ary[100];

    for (i = 0; i < 100; i++)
    {
        scanf(" %d", &ary[i]);
        
        if (ary[i] == 0)
        {
            break;
        } else cnt += 1;
    }

    for (i = cnt - 1; i > -1; i--)
    {
        printf("%d ", ary[i]);
    }

    return 0;
}