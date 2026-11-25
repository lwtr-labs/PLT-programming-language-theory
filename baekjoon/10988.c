#include <stdio.h>

int main(void) {
    char str[100];
    int back = 0;
    int i;
    char input;

    for(i = 1; i <= 100; i++) {
        scanf("%c", &input);
        if (input >= 'a' && input <= 'z')
            str[back++] = input;
        else
            break;
    }
}