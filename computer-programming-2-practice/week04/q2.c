#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    short s_max = SHRT_MAX;
    short s_min = SHRT_MIN;
    float f_max = FLT_MAX;
    float f_min = FLT_MIN;

    s_max = s_max + 1;
    printf("s_max = %d\n", s_max);
    s_min = s_min - 1;
    printf("s_min = %u\n\n", s_min);

    f_max = f_max * 2.0f;
    printf("f_max = %e\n", f_max);

    f_min = f_min / 1.0e10f;
    printf("f_min = %e\n", f_min);

    return 0;
}
