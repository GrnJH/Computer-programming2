#include <stdio.h>

//�� ����ü ������ �������,Ȥ�� �� ����ü ������ �ּ� ����
//������� SwapPoint��� �̸��� �Լ��� ȣ���ϸ� pos1�� xpos, ypos���� 
//���� 5�� 7��, pos2�� xpos, ypos���� ���� 2�� 4�� ����ǵ��� �Ͻÿ�.
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