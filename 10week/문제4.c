#include <stdio.h>

//두 구조체 변수를 대상으로,혹은 두 구조체 변수의 주소 값을
//대상으로 SwapPoint라는 이름의 함수를 호출하면 pos1의 xpos, ypos에는 
//각각 5와 7이, pos2의 xpos, ypos에는 각각 2와 4가 저장되도록 하시오.
/*
typedef struct point {
    int xpos;
    int ypos;
}Point;

Point Rect(Point p1, Point p2) {
    Point leng;
    leng.xpos = p1.xpos - p2.xpos;
    leng.ypos = p1.ypos - p2.ypos;
    printf("넓이 : %d\n", (leng.xpos) * (leng.ypos));

}

Point Output(Point p1, Point p2) {
    printf("%d %d\n", p1.xpos, p1.ypos);
    printf("%d %d\n", p2.xpos, p2.ypos);
}

int main() {
    Point p1 = { 0,0 };
    Point p2 = { 10, 10 };

    Rect(p1, p2);
    Output(p1, p2);
}
*/


typedef struct point {
    int xpos;
    int ypos;
} Point;

typedef struct rectangle {
    Point r1;
    Point r2;
} Rectangle;

Rectangle Rect(Rectangle p1) {
    int sum;
    sum = (p1.r1.xpos - p1.r2.xpos)*(p1.r1.ypos - p1.r2.ypos);

    printf("넓이 : %d\n", sum);
}

Point Output(Rectangle p1) {
    printf("좌상단 : %d %d\n", p1.r1.xpos, p1.r2.ypos);
    printf("좌하단 : %d %d\n", p1.r1.xpos, p1.r1.ypos);
    printf("우상단 : %d %d\n", p1.r2.xpos, p1.r2.ypos);
    printf("우하단 : %d %d\n", p1.r2.xpos, p1.r1.ypos);
}


int main() {
    Rectangle p1 = { 1,1, 10, 10 };
    
    Rect(p1);
    Output(p1);
}