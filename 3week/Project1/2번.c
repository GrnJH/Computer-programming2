#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float Cal(float *a, float *b) {

    float sum, aver;

    sum = *a + *b;
    aver = (*a + *b) / 2;

    printf("���� : %.2f, ����� : %.2f", sum, aver);
    
}

float main() {
    
    float a, b;

    printf("�� ���� �Ǽ��� �Է��ϼ��� : ");
    scanf("%f %f", &a, &b);

    Cal(&a, &b);

}