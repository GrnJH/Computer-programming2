#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int search(char* ptr) {
	int count = 0;
	for (int i = 0; i < 30; i++) {
		if (ptr[i] == 'a' || ptr[i] == 'i' || ptr[i] == 'e' || ptr[i] == 'o' || ptr[i] == 'u')
			count++;
	}
	return count;
}

int main() {

	char a[20];
	char b[20];

	printf("ù��° ����ܾ� �Է� : ");
	scanf("%s %s", &a, &b);

	printf("ù��° �ܾ� ������ ���� : %d\n�ι�° �ܾ� ������ ���� : %d",
		search(a),search(b));

	return 0;
}

