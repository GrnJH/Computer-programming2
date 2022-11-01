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

	printf("도서 정보 입력\n");

	for (int i = 0; i < 3; i++) {
		printf(" 저자 : ");
		scanf("%s", &book[i].name);

		printf(" 제목 : ");
		scanf("%s", &book[i].title);

		printf(" 페이지 수 : ");
		scanf("%d", &book[i].page);
	}

	for (int i = 0; i < 3; i++) {
		printf("%d번째 도서의 정보\n 저자: %s, 제목: %s, 페이지 수: %d\n", 
			i + 1, book[i].name, book[i].title, book[i].page);
	}
	return 0;
}