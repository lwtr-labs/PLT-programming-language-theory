#include <stdio.h>

struct profile
{
    int age;
    double height;
};

struct student
{
    struct profile pf;
    int id;
    double grade;
};

int main(void)
{
    struct student james;

    james.pf.age = 20;
    james.pf.height = 180;
    james.id = 100;
    james.grade = 4.3;

    printf("나이 : %d\n", james.pf.age);
    printf("키 : %.1lf\n", james.pf.height);
    printf("학번 : %d\n", james.id);
    printf("학점 : %.1lf\n", james.grade);

    return 0;
}