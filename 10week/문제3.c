#include <stdio.h>

//두 구조체 변수를 대상으로,혹은 두 구조체 변수의 주소 값을
//대상으로 SwapPoint라는 이름의 함수를 호출하면 pos1의 xpos, ypos에는 
//각각 5와 7이, pos2의 xpos, ypos에는 각각 2와 4가 저장되도록 하시오.
typedef struct point {
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point *p1, Point *p2) {
    Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    Point pos1 = { 2, 4 };
    Point pos2 = { 5, 7 };
    SwapPoint(&pos1,&pos2);

    printf("pos1 : %d %d\n", pos1.xpos, pos1.ypos);
    printf("pos2 : %d %d", pos2.xpos, pos2.ypos);
}