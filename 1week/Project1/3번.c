#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



float Sum(float a, float b, char p) {

    float c = -1.0;

    if (p == '+') {
        c = a + b;
        printf("%.2f �� %.2f�� ���� %.2f �Դϴ�.\n", a, b, c);
    }
    else if (p == '#') {
        c = (a + b) / 2;
        printf("%.2f �� %.2f�� ����� %.2f �Դϴ�.\n", a, b, c);
    }
    return c;

}

int main() {

    float a, b;
    char x;
    float result;

    printf("�� ���� �Է��ϰ�, ���ϱ�(+) �Ǵ� ���(#) �� �Է��Ͻÿ� : \n");
    scanf("%f %f %c", &a, &b, &x);


    while (x != '+' || x != '#') {
        printf("�����ڸ� �ٽ� �Է��ϼ���: ");
        scanf("%s", &x);
    }

    result = Sum(a, b, x);

    return 0;
}
