// 획수

#include <stdio.h>

int main(void) {
    char input;
    int count = 0;
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c", &input);
        if (input == 'j') {
            count += 2;
        } else if (input == 'i') {
            count += 2;
        } else {
            count += 1;
        }
    }

    printf("%d", count);

    return 0;
}