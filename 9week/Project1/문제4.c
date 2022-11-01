#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct complex_st {
	float r_num;  //실수
	float ima_num;  //허수
}Complex;

Complex add(Complex a,Complex b) {
	Complex sum;
	sum.r_num = a.r_num + b.r_num; //실수합
	sum.ima_num = a.ima_num + b.ima_num;  //허수합
	return sum;
}

Complex multi(Complex a, Complex b) {
	//구현해봅시다
}

Complex printcomplex(Complex sum) { //출력함수
	printf("합의 결과: 실수 %.2f, 허수 %.2f", sum.r_num, sum.ima_num);
}

int main() {
	Complex x, y, result;

	printf("복소수 입력 1(실수, 허수) : ");
	scanf("%f %f", &x.r_num, &x.ima_num);
	printf("복소수 입력 2(실수, 허수) : ");
	scanf("%f %f", &y.r_num, &y.ima_num);

	result = add(x,y);
	printcomplex(result);
	
	return 0;
}
