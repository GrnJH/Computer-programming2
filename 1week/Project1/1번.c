#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	float cm;
	float m;

	printf("Ű�� �Է��ϼ��� : ");
	scanf("%f", &cm);

	m = cm / 100;

	printf("%.0f ��Ƽ���ʹ� %.2f �����Դϴ�", cm, m);
}