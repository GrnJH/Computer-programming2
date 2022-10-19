#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	float cm;
	float m;

	printf("키를 입력하세요 : ");
	scanf("%f", &cm);

	m = cm / 100;

	printf("%.0f 센티미터는 %.2f 미터입니다", cm, m);
}