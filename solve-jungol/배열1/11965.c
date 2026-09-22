#include <stdio.h>

int main(void) {
    char alphabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    int i;

    for (i = 25; i > -1; i--)
    {
        printf("%c ", alphabet[i]);
    }
    
    return 0;
}