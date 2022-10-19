#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[3]; //3칸짜리 배열 선배

	int* pa = arr; // 정수타입 포인터 pa 선언 = arr

	printf("%d %d\n", sizeof(arr), sizeof(pa));

	//arr는 정수타입4바이트가 3개 4x3=12
	//pa는 64비트 컴파일러에서 포인터변수의 크기는 8
	//32비트 컴파일러에서 포인트변수의 크기는 4
}

