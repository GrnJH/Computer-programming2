#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct Employee {
	char name[20];
	char resident_num[20];
	int salary;
};

int main() {
	struct Employee EM;

	printf("�̸��Է� : ");
	scanf("%s", EM.name);

	printf("�ֹι�ȣ : ");
	scanf("%s", EM.resident_num);

	printf("�޿� : ");
	scanf("%d", &EM.salary);

	printf("�̸�: %s, �ֹι�ȣ: %s, �޿�: %d", EM.name, EM.resident_num, EM.salary);

	return 0;
}