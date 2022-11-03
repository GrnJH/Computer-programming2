#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct OneWord{
	char word[20];
	char meaning[100];
} Word;

typedef struct dictionary {
	Word dictionary[100];
	int cnt;
} Dictionary;

Dictionary input() {
	Dictionary input;
	char unit[20];
	char mean[100];

	printf("단어 등록 :");
	scanf("%s", unit);
	strcpy(input.dictionary->word, unit);

	printf("뜻 등록 :");
	scanf("%s", mean);
	strcpy(input.dictionary->meaning, mean);

	input.cnt++;
}

Dictionary search() {
	Dictionary search;
	char unit[20];
	printf("단어 입력 :");
	scanf("%s", unit);

	if (strcmp(search.dictionary->word, unit) == 0) {
		printf("뜻은 &s ", search.dictionary->meaning);
	}
	else {
		printf("입력한 단어가 사전에 없습니다.\n");
		input();
	}
}

int main(){

	search();
	search();
	search();
	//미완성... 보강할예정
}
