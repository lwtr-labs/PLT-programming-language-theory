#include <stdio.h>

int main(void)
{
    int n, i, max, ary[100];
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &ary[i]);
    }

    max = ary[0];

    for (i = 1; i < n; i++)
    {
        if (max < ary[i]) {
            max = ary[i];
        }
    }

    printf("%d", max);
}