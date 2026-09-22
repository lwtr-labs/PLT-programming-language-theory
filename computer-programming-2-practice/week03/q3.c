#include <stdio.h>

int main(void) {
    int sensor_id;
    double temperature;
    char status;

    printf("센서 번호, 온도, 상태 코드 입력: ");
    scanf("%d %lf %c", &sensor_id, &temperature, &status);
    
    printf("센서 번호: %d\n", sensor_id);
    printf("온도: %.2f\n", temperature);
    printf("상태 코드: %c\n", status);

    return 0;
}