#include <stdio.h>
#include <string.h>

int main() {
	
	char str1[20];
	int i;
	int sum = 0;

	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	for (i = 0; i<=strlen(str1); i++) {
		if (str1[i] >= '1' && str1[i] <= '9')
			sum += str1[i] - 48; //정수 0의 아스키코드 값
	}
	printf("%d", sum);
	return 0;
}