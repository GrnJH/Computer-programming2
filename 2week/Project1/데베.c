#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct{
	int bookid[5];
	char bookname[20];
	char publisher[20];
	int price;
} BOOK;

int main() {
	BOOK BOOKS[10];
	int i;
	
	FILE* fp = fopen("ex_lec02_input.txt", "r");
	
	for (i = 0; i < 10; i++) {
		fscanf(fp, "%d %s %s %d", &BOOKS[i].bookid, &BOOKS[i].bookname,
			&BOOKS[i].publisher, &BOOKS[i].price);
	}
	fclose(fp);

	if (fp == NULL) {
		printf("blank\n");
		exit(1);
	}

	for (i = 0; i < 10; i++) {
		printf("%d %s %s %s\n", BOOKS[i].bookid, BOOKS[i].bookname,
			BOOKS[i].publisher, BOOKS[i].price);
	}

	return 0;
	
}

//너무어려워서.. 죄송합니다