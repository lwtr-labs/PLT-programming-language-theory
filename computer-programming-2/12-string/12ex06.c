#include <stdio.h>

int main(void) {
    int ch; // EOF는 -1로 매핑되어 있기 때문에, int 형 사용
    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}