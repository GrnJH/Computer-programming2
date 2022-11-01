#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <string.h>

int main() {

	char str1[20];
	char str2[20];
	char str3[40];

	fputs("문자열 입력 : ",stdout);
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1)-1] = 0; //개행문자 제거
	fputs("문자열 입력 : ", stdout);
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0; //개행문자 제거

	strcpy(str3, str1);
	puts(str3);
	strcat(str3, str2);
	puts(str3);
}