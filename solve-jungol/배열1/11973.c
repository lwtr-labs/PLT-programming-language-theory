#include <stdio.h>

int main(void)
{
    int i, max, min, ary[10];
    
    for (i = 0; i < 10; i++)
    {
        scanf(" %d", &ary[i]);
    }

    // find max val
    max = ary[0];

    for (i = 1; i < 10; i++)
    {
        if (max < ary[i]) {
            max = ary[i];
        }
    }

    // find min val
    min = ary[0];

    for (i = 1; i < 10; i++)
    {
        if (min > ary[i]) {
            min = ary[i];
        }
    }    

    printf("%d %d", max, min);

    return 0;
}