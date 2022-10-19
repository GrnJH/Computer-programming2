#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float Cal(float a, float b, float*sum, float*aver) {

    *sum = a + b;
    *aver = (a + b) / 2;
}

float main() {

    float a, b, sum, aver;

    printf("두 개의 실수를 입력하세요 : ");
    scanf("%f %f", &a, &b);

    Cal(a, b, &sum, &aver);

    printf("%.2f %.2f:",sum, aver);

    return 0;
}