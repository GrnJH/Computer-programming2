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
		// 1. str�� ��ڴ� 2. 7�����Է¹ްڴ�. 3. Ű����κ��� ǥ���Է�
		printf("read %d: %s \n", i + 1, str); //���� : ������ �����?

	}
	return 0;
}





void removebsn(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}

int main() {
	char str[10];
	printf("�����Է� : ");
	fgets(str, sizeof(str), stdin);
	printf("���� : %d, ���� %s \n", strlen(str), str);

	removebsn(str);
	printf("���� : %d, ���� %s \n", strlen(str), str);
	return 0;
*/
int main() {
	char str1[20] = "1234567890";
	char str2[20];
	char str3[6];
	
	strcpy(str2, str1);
	puts(str2);

	printf(" str3�� ũ�� = %d\n", sizeof(str3));

	strncpy(str3, str1, sizeof(str3)-1);
	puts(str3); // ���� : �� ������ �̻����� �����°�? �ڵ�����puts�� fputs

	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3) - 1] = 0; // ���� : �ǵ�������? str3[4]=0 �̸�
	//�迭�� ���� 0 �� = null?? 
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





// const char *s =   s�� ������ ���� �����ؼ� �� ���� �ٲ� �� ����. 
// char *const s = �ּҰ��� �߰��� �ٲ� �� ����.

//���� 1 �Է¹��� �ʱ�ȭ�����? = getchar()�� �߰��ؼ� �ʱ�ȭ
//void ClearLineFromReadBuffer(){
//while (getchar() != 'n');
//}

//���ڿ������� �ּҰ�?