#include <stdio.h>

int calculate_10mod(int i);

int main(void)
{
    int result[10] = { 0 };
    int i, numberInput;

    while (scanf("%d", &numberInput) == 1 & (numberInput != 0))
    {
        result[calculate_10mod(numberInput)] += 1;
    }

    for (i = 0; i < 10; i++)
    {
        if (result[i] > 0)
        {
            printf("%d : %d\n", i, result[i]);
        }
    }

    return 0;
}

int calculate_10mod(int i)
{
    int temp, mod;

    mod = i % 10;
    temp = (i - mod) / 10;
    temp = (int) temp;
    return temp;
}