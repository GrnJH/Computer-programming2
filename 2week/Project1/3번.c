#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	double arrd[4] = { 12.4, 23.1, 15.7, 31.2 };

	double *pb=arrd;
	
	for (int i = 0; i<sizeof(arrd)/sizeof(double); i++) {
		printf("%.1f ", *(pb+i);
	}
}