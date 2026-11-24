// 만들 수 없는 수들 중에서 가장 작은 수

#include <stdio.h>
#define RESULT_RANGE 55001

int get_sum_by_mask(int mask, int arr[]);

int main(void) {
    int arr[11];
    int result[RESULT_RANGE] = { 0 };
    int n;
    for (int i = 0; i < 11; i++) {
        scanf(" %d", &n);
        arr[i] = n;
    }
    

    for (int i = 1; i < 2048; i++) {
        result[get_sum_by_mask(i, arr)] = 1;
    }

    for (int i = 1; i < RESULT_RANGE; i++) {
        if (!result[i]) {
            printf("%d", i);
            break;           
        }
    }

    return 0;
}

int get_sum_by_mask(int mask, int arr[]) {
    int result = 0;
    if (mask & 1)
        result += arr[0];
    if (mask & 2)
        result += arr[1];
    if (mask & 4)
        result += arr[2];
    if (mask & 8)
        result += arr[3];
    if (mask & 16)
        result += arr[4];
    if (mask & 32)
        result += arr[5];
    if (mask & 64)
        result += arr[6];
    if (mask & 128)
        result += arr[7];
    if (mask & 256)
        result += arr[8];
    if (mask & 512)
        result += arr[9];
    if (mask & 1024)
        result += arr[10];
    return result;
}