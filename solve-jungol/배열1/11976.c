#include <stdio.h>

int main() {
    int ary[10], i, odd_sum = 0, even_sum = 0;
    float avg;

    for (i = 0; i < 10; i ++)
    {
        scanf(" %d", &ary[i]);
    }

    // get even_sum
    for (i = 0; i < 10; i ++)
    {
        if (i % 2 == 1) {
            even_sum += ary[i];
        }
    }

    // get odd_sum
    for (i = 0; i < 10; i ++)
    {
        if (i % 2 == 0) {
            odd_sum += ary[i];
        }
    }    

    // print even sum
    printf("sum : %d\n", even_sum);

    // calculate odd_average
    avg = (float) odd_sum / 5.0;
    printf("avg : %.1f", avg);

    return 0;
}