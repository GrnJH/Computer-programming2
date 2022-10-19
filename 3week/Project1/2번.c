#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float Cal(float *a, float *b) {

    float sum, aver;

    sum = *a + *b;
    aver = (*a + *b) / 2;

    printf("합은 : %.2f, 평균은 : %.2f", sum, aver);
    
}

float main() {
    
    float a, b;

    printf("두 개의 실수를 입력하세요 : ");
    scanf("%f %f", &a, &b);

    Cal(&a, &b);

}