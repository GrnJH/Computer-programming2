#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



float Sum(float a, float b, char p) {

    float c = -1.0;

    if (p == '+') {
        c = a + b;
        printf("%.2f 과 %.2f의 합은 %.2f 입니다.\n", a, b, c);
    }
    else if (p == '#') {
        c = (a + b) / 2;
        printf("%.2f 과 %.2f의 평균은 %.2f 입니다.\n", a, b, c);
    }
    return c;

}

int main() {

    float a, b;
    char x;
    float result;

    printf("두 수를 입력하고, 더하기(+) 또는 평균(#) 을 입력하시오 : \n");
    scanf("%f %f %c", &a, &b, &x);


    while (x != '+' || x != '#') {
        printf("연산자를 다시 입력하세요: ");
        scanf("%s", &x);
    }

    result = Sum(a, b, x);

    return 0;
}
