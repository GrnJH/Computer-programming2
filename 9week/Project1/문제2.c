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
		printf("%d번째 종업원의 정보\n", i + 1);
		printf(" 이름입력 : ");
		scanf("%s", EM[i].name);

		printf(" 주민번호 : ");
		scanf("%s", EM[i].resident_num);

		printf(" 급여 : ");
		scanf("%d", &EM[i].salary);
	}

	for (int i = 0; i < 3; i++) {
		printf("%d번째 종업원 이름: %s, 주민번호: %s, 급여: %d\n",i+1, EM[i].name, EM[i].resident_num, EM[i].salary);
	}
	return 0;
}