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

	printf("�� ���� �Է��Ͻÿ� : ");
	scanf("%f %f", &a, &b);

	printf("%.2f �� %.2f�� ���� %.2f, ����� %.2f �Դϴ�%.\n", a, b, Sum(a,b), Avg(a,b));
}

