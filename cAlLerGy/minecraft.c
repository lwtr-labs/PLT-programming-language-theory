#include <stdio.h>
#define MAX_SIZE 500

int main(void) {
    int world[MAX_SIZE][MAX_SIZE];

    int n, m;
    long long b;
    int input_block;

    scanf("%d %d %lld", &n, &m, &b);

    int max = 0;
    int min = 256;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %d", &input_block);

            max = (input_block > max) ? input_block : max;
            min = (input_block < min) ? input_block : min; 
            
            world[i][j] = input_block;
        }
    }

    unsigned int spend_time;    // 자료형 크기 고려
    long long left_block;
    unsigned int minimum_time = 20000000000000; // 엄청 큰 최댓값
    unsigned int height_such_that_minimum_time = 0;
    
    for (int pivot = 0; pivot <= 256; pivot++) {

        spend_time = 0;
        left_block = b;

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {

                if (world[j][k] != pivot) {
                    if (world[j][k] > pivot) {
                        spend_time += (world[j][k] - pivot) * 2;
                        left_block += (world[j][k] - pivot);
                    }
                    else {
                        spend_time += (pivot - world[j][k]);
                        left_block -= (pivot - world[j][k]);
                    }
                }
            }
        }
        if ((minimum_time >= spend_time) && (left_block >= 0)) {
            if (minimum_time == spend_time) {
                if (height_such_that_minimum_time < pivot) {
                    minimum_time = spend_time;
                    height_such_that_minimum_time = pivot;
                }
            } else {
                minimum_time = spend_time;
                height_such_that_minimum_time = pivot;
            }
        }
    }

    printf("%u %u", minimum_time, height_such_that_minimum_time);

    return 0;
}