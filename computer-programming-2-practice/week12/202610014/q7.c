#include <stdio.h>

int main(void) {
    int a[2][3] = { { 10, 20, 30 }, 
                    { 40, 50, 60 } };
    int (*p)[3] = a;

    printf("a[0][1] = %d\n", a[0][1]);
    printf("p[0][1] = %d\n", p[0][1]);
    printf("*(*(p+1)+2) = %d\n", *(*(p + 1) + 2));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%3d", *(*(a + i) + j));
        printf("\n");
    }

    return 0;
}