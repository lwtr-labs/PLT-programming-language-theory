// 예제 #4. 저장 가능한 파일 개수 구하기

#include <stdio.h>

int main(void) {
    int storage;    // 전체 저장 공간
    int file_size;  // 파일 하나의 크기
    int count;      // 저장 가능한 파일 수
    int remain;     // 남은 공간

    printf("전체 저장 공간(MB): ");
    scanf("%d", &storage);

    printf("파일 하나의 크기(MB): ");
    scanf("%d", &file_size);

    count = storage / file_size;
    remain = storage % file_size;

    printf("저장 가능한 파일 수: %d개\n", count);
    printf("남은 공간: %dMB\n", remain);

    return 0;
}