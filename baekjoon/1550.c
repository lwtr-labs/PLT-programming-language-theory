#include <stdio.h>

int char_to_int(char input);
    
int main(void) {
    char input_string[6];
    char box[6] = { '0', '0', '0', '0', '0', '0' };
    int cnt = 0;
    int i, result, x16;

    scanf(" %s", input_string);

    for(i = 0; i < 6; i++) {
        if((input_string[i] >= 'A' && input_string[i] <= 'F') ||
           (input_string[i] >= '0' || input_string[i] <= '9')) {
            box[cnt] = input_string[i];
            cnt += 1;
        } else {
            break;
        }
    }

    // for(int i = 0; i < 6; i++)
    //     printf("%c ", box[i]);
    // printf("\n");

    result = 0;
    x16 = 1;
    for(i = 0; i < cnt; i++) {
        result += char_to_int(box[i]) * x16;
        x16 *= 16;
    }
    
    printf("%d", result);

    return 0;   
}

int char_to_int(char input) {
    if(input == '0')
        return 0;
    if(input == '1')
        return 1;
    if(input == '2')
        return 2;
    if(input == '3')
        return 3;
    if(input=='4')
        return 4;
    if(input=='5')
        return 5;
    if(input=='6')
        return 6;
    if(input=='7')
        return 7;
    if(input=='8')
        return 8;
    if(input=='9')
        return 9;
    if(input=='A')
        return 10;
    if(input=='B')
        return 11;
    if(input=='C')
        return 12;
    if(input=='D')
        return 13;
    if(input=='E')
        return 14;
    if(input=='F')
        return 15;
}