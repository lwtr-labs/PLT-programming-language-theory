#include <stdio.h>

int main(void) {
    const char *p = "Hello World";
    printf("%s \n", p);

    p = "Welcome to C World!";  // 가능
    printf("%s \n", p);

    p = "Goodbye"; // 가능
    printf("%s \n", p);
    // p[0] = 'a'; // 문자열 리터럴 수정 불가

    return 0;
}