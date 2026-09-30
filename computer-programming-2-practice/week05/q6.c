#include <stdio.h>

int main(void) {

    char data = 'a';
    char key = 0xff;
    char encrpted_data, orig_data;

    printf("초기 문자 = %d\n", data);
    encrpted_data = data ^ key;
    printf("변환된 문자 = %d\n", encrpted_data);
    orig_data = encrpted_data ^ key;
    printf("복원된 문자 = %d\n", orig_data);

    return 0;
}