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
    printf("x´Â : %d,  y´Â : %d", x, y);

    return 0;
}