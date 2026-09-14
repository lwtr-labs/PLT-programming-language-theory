// 예제#5. 센서 정보 입출력

// 온도 측정 센서에서 센서 번호, 측정 온도, 상태 코드를
// 입력받는 상황을 가정해서 프로그램을 구현해보자.

#include <stdio.h>

int main(void) {
    int sensor_id;          // 센서 번호(정수)
    double temperature;     // 온도 (실수)
    char status;            // 상태 코드(문자)

    // 센서 정보 입력
    printf("센서 번호, 온도, 상태 코드 입력: ");
    scanf("%d %lf %c", &sensor_id, &temperature, &status);

    // 입력한 정보 출력
    printf("센서 번호: %d\n", sensor_id);
    printf("온도: %lf\n", temperature);
    printf("상태 코드: %c\n", status);

    return 0;
}