#include <stdio.h>

int main() {

	int arr[6] = {1,2,3,4,5,6};
	int* ptr = &arr[0];
	int* ptr2 = &arr[5];


	for (int i = 0; i < sizeof(arr) / 2;  i++) {
		*(ptr - 1);
		printf("%d", *ptr);
	}

}