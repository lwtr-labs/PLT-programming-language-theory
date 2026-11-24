#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s[] = "apple,100,3";
    char result[100];
    char *end;

    printf("strtok: %s\n", strtok(s, ","));     // 첫 번째 문자열 분리
    printf("strtok: %s\n", strtok(NULL, ","));  // 두 번째 문자열 분리
    printf("strtok: %s\n", strtok(NULL, ","));  // 세 번째 문자열 분리
    printf("atoi: %d\n", atoi("123"));          // 문자열을 정수로 변환
    printf("atof: %.2f\n", atof("3.14"));       // 문자열을 실수로 변환

    long n = strtol("123abc", &end, 10);        // 10진수 정수로 변환
    printf("strtol: %ld, 남은 문자열: %s\n", n, end); // 변환 결과와 남은 문자열 출력

    int age;
    sscanf("Age: 20", "Age: %d", &age); // 문자열에서 정수 추출
    printf("sscanf: %d\n", age);

    // 배열 크기 내에서 문자열 생성
    snprintf(result, sizeof(result), "Score: %d", 95);
    printf("snprintf: %s\n", result);

    return 0;
}