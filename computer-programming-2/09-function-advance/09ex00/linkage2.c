// linkage2.c

extern int all_files;
// extern in this_files; -> 정적 변수는 해당 소스 파일에서만 사용 가능

void sub(void) {
    all_files = 10;
    // this_files = 11;
}