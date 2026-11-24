#include <stdio.h>
#include <ctype.h>

int count_word(const char* s);
int main(void) {
    int wc = count_word("apple bear cat digital email");
    printf("단어의 개수: %d\n", wc);
    return 0;
}

int count_word(const char* s) {
    int i, wc = 0, wating = 1;

    for (i = 0; s[i] != '\0'; i++)
        if(isalpha(s[i])) {
            if (wating) {
                wc++;
                wating = 0;
            }
        }
        else 
            wating = 1;
    return wc;
}