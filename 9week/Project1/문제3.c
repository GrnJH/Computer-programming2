#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Book {
	char title[20];
	char name[20];
	int page;
};

int main() {
	struct Book book[3];

	printf("���� ���� �Է�\n");

	for (int i = 0; i < 3; i++) {
		printf(" ���� : ");
		scanf("%s", &book[i].name);

		printf(" ���� : ");
		scanf("%s", &book[i].title);

		printf(" ������ �� : ");
		scanf("%d", &book[i].page);
	}

	for (int i = 0; i < 3; i++) {
		printf("%d��° ������ ����\n ����: %s, ����: %s, ������ ��: %d\n", 
			i + 1, book[i].name, book[i].title, book[i].page);
	}
	return 0;
}