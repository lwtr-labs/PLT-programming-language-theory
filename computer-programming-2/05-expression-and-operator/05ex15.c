// 예제 #15. XOR 기반 데이터 변환

#include <stdio.h>

int main(void) {
    char data = 'a';
    char key = 0xff;
    char encrpted_data, orig_data;

    printf("초기 문자 = %c\n", data);
    encrpted_data = data ^ key;
    printf("변환된 문자 = %c\n", encrpted_data);
    orig_data = encrpted_data ^ key;    // (data^key)^key와 동일
    printf("복원된 문자 = %c\n", orig_data);

    return 0;
}

/*
같은 수의 xor은 0이고 (같으면 거짓인 xor의 특성),
이후 n xor 0 => n*/