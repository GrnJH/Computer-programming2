#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(void) {

	int win = 0, draw = 0, random = 0;
	while (1) {
		printf("가위, 바위, 보 셋중 하나를 입력하시오 : ");
		char a[10];
		gets(a);

		srand(time(NULL));
		random = rand() % 3 + 1;

		if (random == 1) {  //random=1 가위
			if (strcmp(a, "가위") == 0) {
				printf("당신은 가위선택, 컴퓨터는 가위선택, 비겼습니다\n\n");
				draw++;
			}
			else if (strcmp(a, "바위") == 0) {
				printf("당신은 바위선택, 컴퓨터는 가위선택, 이겼습니다\n\n");
				win++;
			}
			else if (strcmp(a, "보") == 0) {
				printf("당신은 보선택, 컴퓨터는 가위선택, 졌습니다\n\n");
				break;
			}
		}

		else if (random == 2) { //random=2 바위
			if (strcmp(a, "가위") == 0) {
				printf("당신은 가위선택, 컴퓨터는 바위선택, 졌습니다\n\n");
				break;
			}
			else if (strcmp(a, "바위") == 0) {
				printf("당신은 바위선택, 컴퓨터는 바위선택, 비겼습니다\n\n");
				draw++;
			}
			else if (strcmp(a, "보") == 0) {
				printf("당신은 보선택, 컴퓨터는 바위선택, 이겼습니다\n\n");
				win++;
			}
		}

		else if (random == 3) { //random=3 보
			if (strcmp(a, "가위") == 0) {
				printf("당신은 가위선택, 컴퓨터는 보선택, 이겼습니다\n\n");
				win++;
			}
			else if (strcmp(a, "바위") == 0) {
				printf("당신은 바위선택, 컴퓨터는 보선택, 졌습니다\n\n");
				break;
			}
			else if (strcmp(a, "보") == 0) {
				printf("당신은 보선택, 컴퓨터는 보선택, 비겼습니다\n\n");
				draw++;
			}
		}
	}
	printf("게임의 결과 : %d승,%d무\n", win, draw);

	printf("게임을 다시 하시겠습니까? (y)");
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
