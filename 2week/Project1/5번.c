#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char* p = "computerprogramming";
	char a = 'e';
	char* ptr = strchr(p, a);
	//strchr()함수는 문자열에서 찾은 문자 위치의 포인터를 리턴

	printf("문자열 %c의 인덱스는 : %d  ", a, ptr-p);
}