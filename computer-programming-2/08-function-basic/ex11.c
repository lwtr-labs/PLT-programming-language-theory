// 정적 변수의 활용

#include <stdio.h>

void load_config(void);

int main(void) {
    load_config();
    load_config();
    load_config();

    return 0;
}

void load_config(void) {
    static int loaded = 0;

    if (loaded == 0) {
        printf("설정 파일을 읽어옵니다.\n");
        loaded = 1;
    }
    else {
        printf("설정이 이미 로드되어 있습니다.\n");
    }
}