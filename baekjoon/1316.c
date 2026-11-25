#include <stdio.h>

int main(void) {
    int alphabet[128];
    char memory[128];
    char input, header;
    int n, error, result = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 128; j++) {
            alphabet[i] = 0;
        }
        header = 0;
        error = 0;

        while(1) {
            if (error) {
                break;
            }
            input = scanf("%c", &input);
            if(input = '\n') {
                break;
            }
            else {
                memory[header++] = input;
                if(alphabet[(int)input] == 0) {
                    alphabet[(int)input] = 1;
                } else {
                    if (header == 1)
                        continue;
                    else 
                        if (memory[header - 1] == input)
                            continue;
                        else {
                            error = 1;
                            result += 1;
                            break;
                        }
                }
                
            }
        }
    }

    printf("%d", result);

    return 0;
}