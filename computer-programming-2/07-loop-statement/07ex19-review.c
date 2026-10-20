#include <stdio.h>

int main(void) {
    int target;

input:
    printf("Enter the number n to find (x, y, z) that x + y + z = n\n > ");
    scanf("%d", &target);

    if (target < 3 || target > 18) {
        printf("Impossilbe, try other number.\n");
        goto input;
    }
    int cnt = 0;
    for(int x = 1; x < 7; x++) {
        for(int y = 1; y < 7; y++) {
            for(int z = 1; z < 7; z++) {
                if (x + y + z == target) {
                    printf("(%d, %d, %d)\t", x, y, z);
                    cnt++;
                    if (cnt % 4 == 3)
                        printf("\n");
                } 
            }
        }
    }

    printf("Total number of case: %d", cnt);

    return 0;
}