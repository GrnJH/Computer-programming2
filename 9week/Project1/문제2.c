#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct Employee {
	char name[20];
	char resident_num[20];
	int salary;
};

int main() {
	struct Employee EM[3];

	for (int i = 0; i < 3; i++) {
		printf("%d��° �������� ����\n", i + 1);
		printf(" �̸��Է� : ");
		scanf("%s", EM[i].name);

		printf(" �ֹι�ȣ : ");
		scanf("%s", EM[i].resident_num);

		printf(" �޿� : ");
		scanf("%d", &EM[i].salary);
	}

	for (int i = 0; i < 3; i++) {
		printf("%d��° ������ �̸�: %s, �ֹι�ȣ: %s, �޿�: %d\n",i+1, EM[i].name, EM[i].resident_num, EM[i].salary);
	}
	return 0;
}