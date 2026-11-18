#include <stdio.h>
#define SIZE 5
void analyze(int data[], int n, double *avg, int *max, int *min);

int main(void) {
    int data[SIZE];
    double avg;
    int max, min;

    int* pdata = data;
    int input;
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &input);
        *(pdata + i) = input;
    }

    analyze(data, SIZE, &avg, &max, &min);
    printf("평균: %.1f\n", avg);
    printf("최댓값: %d\n", max);
    printf("최솟값: %d\n", min);

    return 0;
}

void analyze(int data[], int n, double *avg, int *max, int *min) {
    int sum = 0;
    *max = *min = *data;

    for (int i = 0; i < n; i++) {
        sum += *(data + i);

        if (*(data + i) > *max)
            *max = *(data + i);
        if (*(data + i) < *min)
            *min = *(data + i);
    }
    *avg = (double)sum / n;
}