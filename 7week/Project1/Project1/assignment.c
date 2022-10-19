#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <string.h>
/*
프로그램 사용자로부터 이름과 나이를 다음의 형식에 맞춰서 
하나의 문자열로 입력 받는다.

“이정선 29”
“한수정 7”
“오선주 17”

이름은 세 글자가 아닐 수도 있고, 영문으로 입력될 수도 있다.
이러한 형식으로 두 사람의 정보를 입력 받아서 이름과 나이가 각각 
같은지 다른지를 판단하여 출력하는 프로그램을 작성해 보자.
*/

int main() {
	
	char str1[50];
	char str2[50];

	fputs("첫번째 인적정보 입력 : " ,stdout);
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	fputs("두번째 인적정보 입력 : ", stdout);
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (strcmp(str1, str2) == 0) {
		printf("입력한정보 '%s' 와 '%s' 는 같습니다. ", str1, str2);
	}
	else {
		printf("입력한정보 '%s' 와 '%s' 는 다릅니다. ", str1, str2);
	}
}