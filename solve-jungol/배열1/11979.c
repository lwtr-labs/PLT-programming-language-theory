#include <stdio.h>

int main(void)
{
    int num_array[10], i, odd_sum = 0, even_sum = 0; // 변수 초기화 제발 하자

    for (i = 0; i < 10; i ++)
    {
        scanf("%d", &num_array[i]);
    }

    // calculate odd & even sumation
    for (i = 0; i < 10; i ++)
    {
        if (i % 2 == 0)
        {
            odd_sum += num_array[i];
        }
        else
        {
            even_sum += num_array[i];
        }
    }

    printf("odd : %d\neven : %d", odd_sum, even_sum);

    return 0;
}