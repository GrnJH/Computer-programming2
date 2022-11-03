#include <stdio.h>

//�� ����ü ������ �������,Ȥ�� �� ����ü ������ �ּ� ����
//������� SwapPoint��� �̸��� �Լ��� ȣ���ϸ� pos1�� xpos, ypos���� 
//���� 5�� 7��, pos2�� xpos, ypos���� ���� 2�� 4�� ����ǵ��� �Ͻÿ�.
/*
typedef struct point {
    int xpos;
    int ypos;
}Point;

Point Rect(Point p1, Point p2) {
    Point leng;
    leng.xpos = p1.xpos - p2.xpos;
    leng.ypos = p1.ypos - p2.ypos;
    printf("���� : %d\n", (leng.xpos) * (leng.ypos));

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

    printf("���� : %d\n", sum);
}

Point Output(Rectangle p1) {
    printf("�»�� : %d %d\n", p1.r1.xpos, p1.r2.ypos);
    printf("���ϴ� : %d %d\n", p1.r1.xpos, p1.r1.ypos);
    printf("���� : %d %d\n", p1.r2.xpos, p1.r2.ypos);
    printf("���ϴ� : %d %d\n", p1.r2.xpos, p1.r1.ypos);
}


int main() {
    Rectangle p1 = { 1,1, 10, 10 };
    
    Rect(p1);
    Output(p1);
}