#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x, int y) {
	printf("%d\n", x + y);
}

int minus(int x, int y) {
	printf("%d\n", x - y);
}

int mult(int x, int y) {
	printf("%d\n", x * y);
}

int max(int x, int y) {
	if (x > y) {
		printf("%d\n", x);
	}
	else
		printf("%d\n", y);
}
int min(int x, int y) {
	if (x < y)
		printf("%d\n", x);
	else if (x > y)
		printf("%d\n", y);
}

int main() {
	int(*p)(int, int);
	int a, x, y;

	printf("두 개의 수를 입력하세요 : ");
	scanf_s("%d %d", &x, &y);

	printf("0-종료, 1-합, 2-차, 3-곱, 4-큰 값, 5-작은 값 : ");
	scanf_s("%d", &a);

	int(*f1)(int, int) = sum;
	int(*f2)(int, int) = minus;
	int(*f3)(int, int) = mult;
	int(*f4)(int, int) = max;
	int(*f5)(int, int) = min;

	while (1) {
		switch (a) {
		case 0:
			printf("종료\n");
			break;
		case 1:
			f1 = sum(x, y);
			break;
		case 2:
			f2 = minus(x, y);
			break;
		case 3:
			f3 = mult(x, y);
			break;
		case 4:
			f4 = max(x, y);
			break;
		case 5:
			f5 = min(x, y);
			break;
		}

		return 0;
	}
}