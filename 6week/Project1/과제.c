#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(void) {

	int win = 0, draw = 0, random = 0;
	while (1) {
		printf("����, ����, �� ���� �ϳ��� �Է��Ͻÿ� : ");
		char a[10];
		gets(a);

		srand(time(NULL));
		random = rand() % 3 + 1;

		if (random == 1) {  //random=1 ����
			if (strcmp(a, "����") == 0) {
				printf("����� ��������, ��ǻ�ʹ� ��������, �����ϴ�\n\n");
				draw++;
			}
			else if (strcmp(a, "����") == 0) {
				printf("����� ��������, ��ǻ�ʹ� ��������, �̰���ϴ�\n\n");
				win++;
			}
			else if (strcmp(a, "��") == 0) {
				printf("����� ������, ��ǻ�ʹ� ��������, �����ϴ�\n\n");
				break;
			}
		}

		else if (random == 2) { //random=2 ����
			if (strcmp(a, "����") == 0) {
				printf("����� ��������, ��ǻ�ʹ� ��������, �����ϴ�\n\n");
				break;
			}
			else if (strcmp(a, "����") == 0) {
				printf("����� ��������, ��ǻ�ʹ� ��������, �����ϴ�\n\n");
				draw++;
			}
			else if (strcmp(a, "��") == 0) {
				printf("����� ������, ��ǻ�ʹ� ��������, �̰���ϴ�\n\n");
				win++;
			}
		}

		else if (random == 3) { //random=3 ��
			if (strcmp(a, "����") == 0) {
				printf("����� ��������, ��ǻ�ʹ� ������, �̰���ϴ�\n\n");
				win++;
			}
			else if (strcmp(a, "����") == 0) {
				printf("����� ��������, ��ǻ�ʹ� ������, �����ϴ�\n\n");
				break;
			}
			else if (strcmp(a, "��") == 0) {
				printf("����� ������, ��ǻ�ʹ� ������, �����ϴ�\n\n");
				draw++;
			}
		}
	}
	printf("������ ��� : %d��,%d��\n", win, draw);

	printf("������ �ٽ� �Ͻðڽ��ϱ�? (y)");
	while (1) {
		if (getchar() == 'y') {
			main();
			break;
		}
		else {
			break;
		}
	}

}
