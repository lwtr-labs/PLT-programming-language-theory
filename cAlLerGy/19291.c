#include <stdio.h>

int main()
{
    char str[10];
    int i;
    char *p = str;

    for (i = 0; i < 10; i++)
    {
        scanf(" %c", (p + i));
    }

    for (i = 0; i < 10; i++)
    {
        printf("%c", *(p + i));
    }

    return 0;
}