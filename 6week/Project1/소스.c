#include <stdio.h>

int main() {
	int num = 20;

	int* ptr = &num;

	*ptr =20;
	ptr++;

	printf("%d", ptr);
}