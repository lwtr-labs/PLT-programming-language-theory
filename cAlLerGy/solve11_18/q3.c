// 감영 정점 수 세기

#include <stdio.h>
#define SIZE 1000

int main(void) {
    int n;
    int input;
    int arr[SIZE];
    int result;

    while(1) {
        result = 0;
        scanf("%d", &input);
        
        if (input == 0) break;

        for (int i = 0; i < input; i++) {
            scanf(" %d", &n);
            arr[i] = n;
        }

        int before, now, next;
        for (int i = 1; i < input - 1; i++) {
            before = arr[i - 1];
            now = arr[i];
            next = arr[i + 1];

            if ((now > next) && (now > before))
                result += 1;
        }

        printf("%d\n", result);
    }

    return 0;
}