#include <stdio.h>

int main(void)
{
    int ary[100], i, cnt = 0, max, min;
    
    for (i = 0; i < 100; i++)
    {
        scanf(" %d", &ary[i]);

        if (ary[i] == 0)
        {
            break;
        }
        
        cnt += 1;
    }

    // find max
    max = ary[0];

    for (i = 1; i < cnt; i ++)
    {
        if (max < ary[i])
        {
            max = ary[i];
        }
    }

    // find min
    min = ary[0];

    for (i = 1; i < cnt; i ++)
    {
        if (min > ary[i])
        {
            min = ary[i];
        }
    }

    printf("%d", (max - min));

    return 0;
}