#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Value(int a) {

    return a*a;
}

int Reference(int* a) {
    return *a * *a;
}

int main() {

    int num = 10;

    int* ptr = &num;

    printf("%d�� ������ : %d \n", num, Value(num));
    printf("%d�� ������ : %d ", num, Reference(ptr));

    return 0;
}