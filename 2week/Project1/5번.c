#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char* p = "computerprogramming";
	char a = 'e';
	char* ptr = strchr(p, a);
	//strchr()�Լ��� ���ڿ����� ã�� ���� ��ġ�� �����͸� ����

	printf("���ڿ� %c�� �ε����� : %d  ", a, ptr-p);
}