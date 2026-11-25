// rand.c
#define SEED 17     // 초기 시드값

int MULT = 25173;   // 곱셈 상수
int INC = 13849;    // 증가 상수
int MOD = 65536;    // 난수 생성 범위 설정

static unsigned int seed = SEED;    // 이전 시드값 유지

// 정수 난수 생성 함수
unsigned random_i(void) {
    seed = (MULT * seed + INC) % MOD;   // 새로운 난수 계산
    return seed; // 정수 난수 반환
}

// 실수 난수 생성 함수
double random_f(void) {
    seed = (MULT * seed + INC) % MOD;   // 새로운 난수 계산
    return seed / (double)MOD;          // 0.0 이상 1.0 미만으로 변환
}
