#include <stdio.h>

int main() {

	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int i = 0;

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		// 2������ *(ptr + i) += 2;
		// 1������   *p+=2; p++
		printf("%d ", *ptr+i);
	}
}