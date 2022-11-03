#include <stdio.h>

union grade {
    int score;
    double gpa;
};

int main(void) {

    union grade g1 = { 95 };

    // score를 출력하시오
    printf("score = %d\n", g1.score);
    // gpa에 4.3을 대입하시오
    g1.gpa = 4.3;
    // gpa를 출력하시오
    printf("gpa = %f\n", g1.gpa);
    // score를 출력하시오
    printf("score = %d\n", g1.score);

    return 0;
}