#include <stdio.h>

int main(void) {
    while (1)
    {
        int month;
        scanf("%d", &month);
        if ((month > 12) | (month < 1))
        {
            return 0;
        }

        if (month <= 7)
        {
            if ((month != 2) & (month % 2 == 0))
            {
                printf("%d\n", 30);
            } else if (month == 2)
            {
                printf("%d\n", 28);
            } else {
                printf("%d", 31);
            }
        } else {
            if (month % 2 == 0) {
                printf("%d\n", 31);
            } else {
                printf("%d\n", 30);
            }
        }
    }
}