#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Sum(int a) {

	int i;
	int sum = 0;

	for (i = 1; i <= a; i++) {
		if (i % 5 == 0) {
			continue;
		}
		if (sum > 1000)
			break;
		sum += i;
	}

	return sum;
}

int main() {

	int a;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);

	Sum(a);
	printf("%d\n", Sum(a));
	return 0;
}

