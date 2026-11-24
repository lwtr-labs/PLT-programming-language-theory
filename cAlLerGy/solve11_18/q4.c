// 케이크 한 조각!

#include <stdio.h>

int main(void) {
    int n, h, v;

    scanf("%d %d %d", &n, &h, &v);

    int max_w, max_h;

    max_w = (h > n - h) ? h : n - h;
    max_h = (v > n - v) ? v : n - v;

    printf("%d", max_w * max_h * 4);

    return 0;
}