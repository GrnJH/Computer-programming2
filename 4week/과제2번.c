#include <stdio.h>


char Pswap(char** a, char** b) {
	char* temp = *a;
	*a = *b;
	*b = temp;

}
int main() {

	char* pa = "dog";
	char* pb = "cat";

	printf("%s %s \n", pa, pb);
	Pswap(&pa, &pb);

	printf("%s %s", pa, pb);

}