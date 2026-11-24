// 회문 만들기

#include <stdio.h>

int main(void) {
    char input;

    int arr[128] = { 0 };

    int i = 0;
    while (i < 50) {
        input = getchar();

        if (input > 'Z' || input < 'A') {
            break;
        } else {
            arr[(int)input] += 1;
        }
        
        i++;
    }

    int odd = 0;
    int even = 0;

    for (int i = (int)'A'; i <= (int)'Z'; i++) {
        if (arr[i]) {
            if (arr[i] % 2 == 0)
                even += 1;
            else
                odd += 1;
        } else {
            continue;
        }
    }

    char odd_char;

    if (odd > 1) {
        printf("ERROR");
    } else {
        if (odd) {
            for (int i = (int)'A'; i <= (int)'Z'; i++) {
                if (arr[i]) {
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
                } else {
                    continue;
                }
            }

            printf("%c", odd_char);
            
            for (int i = (int)'Z'; (int)'A' <= i; i--) {
                if (arr[i] != 0) {
                    if (arr[i] % 2 == 1) {
                        for (int j = 0; j < (arr[i] - 1) / 2; j++) {
                            printf("%c", (char)i);
                        }
                    } else {
                        for (int j = 0; j < (arr[i] / 2); j ++) {
                            printf("%c", (char)i);
                        }
                    }
                } else {
                    continue;
                }          
            }
        } else {
            for (int i = (int)'A'; i <= (int)'Z'; i++) {
                if (arr[i]) {
                    for (int j = 0; j < (arr[i] / 2); j ++) {
                        printf("%c", (char)i);
                    }
                } else {
                    continue;
                }
            }
            for (int i = (int)'Z'; (int)'A' <= i; i--) {
                if (arr[i]) {
                    for (int j = 0; j < (arr[i] / 2); j ++) {
                        printf("%c", (char)i);
                    }
                } else {
                    continue;
                }
            }
        }
    }

    return 0;
}