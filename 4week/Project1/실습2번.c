#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Swap3(int *a, int *b, int *c) {

    int x=0;

     x = *a;
    *a = *b;
    *b = *c;
    *c = x;
}

int main() {

    int a = 10;
    int b = 20;
    int c = 30;

    Swap3(&a,&b,&c);

    printf("%d %d %d", a,b,c);
    
    return 0;
}