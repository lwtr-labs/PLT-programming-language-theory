#include <stdio.h>
#define MAX_SIZE 1000

int main(void) {
    int arr[MAX_SIZE];
    int top = 0;
    int input_number = 0, out_number, index, i;
    char mode;

    while (input_number != -1){
        printf("모드(i(push), o(pop), x(종료))와 정수(종료시 0으로 입력)를 입력: ");
        scanf("%c %d", &mode, &input_number);

        if (mode == (char) "i") {
            arr[top] = input_number;
            top = (top + 1) % MAX_SIZE;

            printf("\n-- 배열 출력 --\n");
            printf("[ ");
            for (i = 0; i < top; i++) {
                printf("%d ", arr[i]);
            }
            printf("]\n");
        } else if (mode == "o") {
            index = (top - 1 == 0) ? MAX_SIZE : (top - 1);
            out_number = arr[index];
            top = (top - 1 == 0) ? MAX_SIZE : (top - 1); 
            
            printf("\n -- 배열 출력 -- \n");
            printf("[ ");
            for (i = 0; i < top; i++) {
                printf("%d ", arr[i]);
            }
            printf("]\n\npoped: %d", out_number);
        }
    }
}