#include <stdio.h>

union grade {
    int score;
    double gpa;
};

int main(void) {

    union grade g1 = { 95 };

    // score�� ����Ͻÿ�
    printf("score = %d\n", g1.score);
    // gpa�� 4.3�� �����Ͻÿ�
    g1.gpa = 4.3;
    // gpa�� ����Ͻÿ�
    printf("gpa = %f\n", g1.gpa);
    // score�� ����Ͻÿ�
    printf("score = %d\n", g1.score);

    return 0;
}