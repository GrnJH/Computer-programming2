#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct complex_st {
	float r_num;  //�Ǽ�
	float ima_num;  //���
}Complex;

Complex add(Complex a,Complex b) {
	Complex sum;
	sum.r_num = a.r_num + b.r_num; //�Ǽ���
	sum.ima_num = a.ima_num + b.ima_num;  //�����
	return sum;
}

Complex multi(Complex a, Complex b) {
	//�����غ��ô�
}

Complex printcomplex(Complex sum) { //����Լ�
	printf("���� ���: �Ǽ� %.2f, ��� %.2f", sum.r_num, sum.ima_num);
}

int main() {
	Complex x, y, result;

	printf("���Ҽ� �Է� 1(�Ǽ�, ���) : ");
	scanf("%f %f", &x.r_num, &x.ima_num);
	printf("���Ҽ� �Է� 2(�Ǽ�, ���) : ");
	scanf("%f %f", &y.r_num, &y.ima_num);

	result = add(x,y);
	printcomplex(result);
	
	return 0;
}
