// linkage2.c

extern int all_files;
// extern int this_files;

void sub(void) {
    all_files = 10;
    // this_files = 11;
}