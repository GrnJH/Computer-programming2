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

	printf("이름입력 : ");
	scanf("%s", EM.name);

	printf("주민번호 : ");
	scanf("%s", EM.resident_num);

	printf("급여 : ");
	scanf("%d", &EM.salary);

	printf("이름: %s, 주민번호: %s, 급여: %d", EM.name, EM.resident_num, EM.salary);

	return 0;
}