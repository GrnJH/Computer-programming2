#include <stdio.h>

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}
int main() {
    int x = 10;
    int y = 20;

    swap(&x, &y);
    printf("x�� : %d,  y�� : %d", x, y);

    return 0;
}