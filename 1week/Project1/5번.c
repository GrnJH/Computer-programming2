#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Sum(int a) {

	int i;
	int sum = 0;

	for (i = 1; i <= a; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	return sum;
}

int main() {

	int a;
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);

	Sum(a);

	return 0;
}

