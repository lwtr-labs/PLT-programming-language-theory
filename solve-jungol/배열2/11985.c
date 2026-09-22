#include <stdio.h>

int main(void)
{
    int count[26] = { 0 };
    int i, iAscii;
    char input;

    while (scanf(" %c", &input) == 1 & ((int) input >= 65 & (int) input <= 90))
    {
        count[(int) input - 65] += 1;
    }

    for (i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", (i+65), count[i]);
        }
    }
}