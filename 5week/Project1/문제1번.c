#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
int main() {

	int arr[3][9];

	for (int i =0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			arr[i][j] = (i+2)*(j+1);
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/

int gugu(int arr[][9], int k) {

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < 9; j++) {
			arr[i][j] = (i + 2) * (j + 1);
			printf("%d \n", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	
	int arr[][9];
	int a;
	//int arr = (int)malloc(sizeof(int) * a);

	printf("원하는 단수를 입력 : ");
	scanf("%d", &a);

	gugu(arr[][9], a);

	return 0;
}

