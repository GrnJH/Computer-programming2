#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int a = 100;
	int *p = &a;
	int *pd;

	pd = p;

	printf("%d", pd);

	return 0;
}

