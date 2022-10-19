#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char* p = "banana";

	while (*p) {
		printf("%s\n", p);
		p++;
	}
}