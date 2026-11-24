#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "banana";

    printf("strcmp: %d\n", strcmp("abc", "abc"));
    printf("strncmp: %d\n", strncmp("apple", "apply", 4));

    printf("strchr: %s\n", strchr(s, 'n'));
    printf("strrchr: %s\n", strrchr(s, 'a'));
    printf("strstr: %s\n", strstr(s, "nan"));
    printf("strcspn: %zu\n", strcspn(s, "n"));

    return 0;
}