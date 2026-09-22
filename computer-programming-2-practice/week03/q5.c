#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("- 정수형 -\n");
    printf("char      : %d ~ %d\n", CHAR_MIN, CHAR_MAX);
    printf("short     : %d ~ %d\n", SHRT_MIN, SHRT_MAX);
    printf("int       : %d ~ %d\n", INT_MIN, INT_MAX);
    printf("long      : %ld ~ %ld\n", LONG_MIN, LONG_MAX);
    printf("long long : %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);

    printf("\n- 실수형 -\n");
    printf("float  : %e ~ %e (유효 자릿수 %d)\n", -FLT_MAX, FLT_MAX, FLT_DIG);
    printf("double : %e ~ %e (유효 자릿수 %d)\n", -DBL_MAX, DBL_MAX, DBL_DIG);

    return 0;
}