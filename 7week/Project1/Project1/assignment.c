#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <string.h>
/*
���α׷� ����ڷκ��� �̸��� ���̸� ������ ���Ŀ� ���缭 
�ϳ��� ���ڿ��� �Է� �޴´�.

�������� 29��
���Ѽ��� 7��
�������� 17��

�̸��� �� ���ڰ� �ƴ� ���� �ְ�, �������� �Էµ� ���� �ִ�.
�̷��� �������� �� ����� ������ �Է� �޾Ƽ� �̸��� ���̰� ���� 
������ �ٸ����� �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��� ����.
*/

int main() {
	
	char str1[50];
	char str2[50];

	fputs("ù��° �������� �Է� : " ,stdout);
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	fputs("�ι�° �������� �Է� : ", stdout);
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (strcmp(str1, str2) == 0) {
		printf("�Է������� '%s' �� '%s' �� �����ϴ�. ", str1, str2);
	}
	else {
		printf("�Է������� '%s' �� '%s' �� �ٸ��ϴ�. ", str1, str2);
	}
}