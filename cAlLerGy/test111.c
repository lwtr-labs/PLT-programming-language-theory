#include <stdio.h>


int main(void) {
    char input; // 입력 받을 변수

    int arr[128] = { 0 };   // 아스키 코드에 대응하는 표

    int i = 0;  // while 초기값
    while (i < 50) {    // 최대 50번 입력 받음
        scanf("%c", &input);   

        if (input > 'Z' || input < 'A') {
            break;  // 대문자가 아닌 다른 수가 나오면 탈출
        } else {
            arr[(int)input] += 1; // 아스키 코드 값에 대응하는 표에 개수 추가하기
        }

        i++; // 증감식
    }

    int odd = 0;    // 대응하는 알파벳의 개수가 홀수인
    int even = 0;   // 짝수인

    for (int i = (int)'A'; i <= (int)'Z'; i++) {    // 셈
        if (arr[i] % 2 == 0)
            even += 1;
        else
            odd += 1;
    }

    char odd_char;  // 홀수 가운데 출력할 거 

    if (odd > 1) {
        printf("ERROR");    // 쳐내기
    } else {
        if (odd) {  // 홀수 개수가 존재할 경우
            for (int i = (int)'A'; i <= (int)'Z'; i++) {
                if (arr[i] != 0) {
                    if (arr[i] % 2 == 1) {
                        odd_char = (char)i;
                        for (int j = 0; j < (arr[i] - 1) / 2; j++) {
                            printf("%c", (char)i);
                        }
                    } else {
                        for (int j = 0; j < (arr[i] / 2); j ++) {
                            printf("%c", (char)i);
                        }                    
                    }
                }
            }

            printf("%c", odd_char);
            
            for (int i = (int)'Z'; (int)'A' <= i; i--) {
                if (arr[i] != 0) {
                    if (arr[i] % 2 == 1) {
                        odd_char = (char)i;
                        for (int j = 0; j < (arr[i] - 1) / 2; j++) {
                            printf("%c", (char)i);
                        }
                    } else {
                        for (int j = 0; j < arr[i] / 2; j ++) {
                            printf("%c", (char)i);
                        }
                    }
                }           
            }
        } else {    // 홀수없
            for (int i = (int)'A'; i <= (int)'Z'; i++) {
                if (arr[i] != 0) {
                    for (int j = 0; j < (arr[i] / 2); j ++) {
                        printf("%c", (char)i);
                    }
                }
            }
            for (int i = (int)'Z'; (int)'A' <= i; i--) {
                if (arr[i] != 0) {
                    for (int j = 0; j < arr[i] / 2; j ++) {
                        printf("%c", (char)i);
                    }
                }           
            }            
        }
    }

    return 0;
}

// ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBA