#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[3]; //3ĭ¥�� �迭 ����

	int* pa = arr; // ����Ÿ�� ������ pa ���� = arr

	printf("%d %d\n", sizeof(arr), sizeof(pa));

	//arr�� ����Ÿ��4����Ʈ�� 3�� 4x3=12
	//pa�� 64��Ʈ �����Ϸ����� �����ͺ����� ũ��� 8
	//32��Ʈ �����Ϸ����� ����Ʈ������ ũ��� 4
}

