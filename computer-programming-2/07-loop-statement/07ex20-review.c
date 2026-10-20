#include <stdio.h>

int main(void) {
    int c100, c500, c1000;

    for(c100 = 0; c100 <= 30; c100++) {
        for(c500 = 0; c500 <= 6; c500++) {
            for(c1000 = 0; c1000 <= 3; c1000++) {
                if (c100*100 + c500*500 + c1000*1000 == 3000) {
                    printf("%d %d %d\n", c100, c500, c1000);
                }
            }
        }
    }
}