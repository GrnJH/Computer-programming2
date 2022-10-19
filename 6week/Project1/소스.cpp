#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
int main() {

	int ch1, ch2;
	scanf("%c", &ch1);

	ch1 = getchar();
	ch2 = fgetc(stdin);

	putchar(ch1);
	fputc(ch2, stdout);

	return 0;
}

int main(void) {

	int ch;

	while (1) {
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}
	return 0;
}

int main() {

	const char *str = "Simple string";

	printf("1. puts test -----\n");
	puts(str);
	
	puts("so simple string");

	printf("2. fputs test ------\n");
	fputs(str, stdout);
	fputs("so simple string", stdout);

	printf("3. end");
	return 0;
}


int main() {
	char str[7];
	int i;

	for (i = 0; i < 3; i++) {
		fgets(str, sizeof(str), stdin); 
		// 1. str에 담겠다 2. 7개를입력받겠다. 3. 키보드로부터 표준입력
		printf("read %d: %s \n", i + 1, str); //질문 : 왜한줄 띄어짐?

	}
	return 0;
}





void removebsn(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}

int main() {
	char str[10];
	printf("문자입력 : ");
	fgets(str, sizeof(str), stdin);
	printf("길이 : %d, 내용 %s \n", strlen(str), str);

	removebsn(str);
	printf("길이 : %d, 내용 %s \n", strlen(str), str);
	return 0;
*/
int main() {
	char str1[20] = "1234567890";
	char str2[20];
	char str3[6];
	
	strcpy(str2, str1);
	puts(str2);

	printf(" str3의 크기 = %d\n", sizeof(str3));

	strncpy(str3, str1, sizeof(str3)-1);
	puts(str3); // 질문 : 왜 사이즈 이상으로 나가는가? 자동개행puts와 fputs

	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3) - 1] = 0; // 질문 : 의도가뭐지? str3[4]=0 이면
	//배열의 끝에 0 들어감 = null?? 
	puts(str3);
	return 0;
}

/*
int main() {
	char str1[20] = "first~";
	char str2[20] = "second";

	char str3[25] = "simple num : ";
	char str4[20] = "1234567890";
	strcat(str1, str2);
	puts(str1);

	strncat(str3, str4, 7);
	puts(str3);
	return 0;
}
*/





// const char *s =   s를 가지는 값을 참조해서 그 값을 바꿀 수 없다. 
// char *const s = 주소값을 중간에 바꿀 수 없다.

//퀴즈 1 입력버퍼 초기화방법은? = getchar()를 추가해서 초기화
//void ClearLineFromReadBuffer(){
//while (getchar() != 'n');
//}

//문자열선언은 주소값?