#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    short s_max = SHRT_MAX; // 32767
    short s_min = SHRT_MIN; // -32768
    float f_max = FLT_MAX;  // 약 3.4e+38
    float f_min = FLT_MIN;  // 약 1.17e-38

    s_max = s_max + 1;      // 정수 오버플로우
    printf("s_max = %d\n", s_max);
    s_min = s_min - 1;      // 정수 언더플로우
    printf("s_min = %u\n\n", s_min);

    f_max = f_max * 2.0f;   // 실수 오버플로우
    printf("f_max = %e\n", f_max);

    f_min = f_min / 1.0e10f;// 실수 언더플로우
    printf("f_min = %e\n", f_min);

    return 0;
}
