#include <stdio.h>

int main(void)
{
    char arr[10];
    char *pa = arr;
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf(" %c", (pa + i));
    }

    for (i = 9; i > -1; i--)
    {
        printf("%c ", *(pa + i));
    }

    return 0;
}