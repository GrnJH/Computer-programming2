#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[3];
	int* pa = arr;

	pa = pa + 1;
	printf("%u ", pa);

	arr = arr + 1;
	printf("%u ", arr);

}