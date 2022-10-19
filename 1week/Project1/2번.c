#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float Sum(float a, float b) {

	return a+b;
}

float Avg(float a, float b) {

	return (a + b) / 2;
}

int main() {

	float a, b;

	printf("두 수를 입력하시오 : ");
	scanf("%f %f", &a, &b);

	printf("%.2f 과 %.2f의 합은 %.2f, 평균은 %.2f 입니다%.\n", a, b, Sum(a,b), Avg(a,b));
}

