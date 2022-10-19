#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <math.h>

/*
struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100, 200 };
	struct point* pptr = &pos1;

	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
	return 0;
}
*/


/*
struct point {
	int xpos;
	int ypos;
};

struct person {
	char 	name[20];
	char 	phoneNum[20];
	int 	age;
};

int main(void) {
	struct point pos = { 10, 20 };
	struct person man = { "�迬��", "010-1212-0001", 21 };

	printf("%p %p %p\n", &pos, &pos.xpos, &pos.ypos);
	printf("%p %p %p %p\n", &man, man.name, man.phoneNum, &man.age);
	return 0;
}
*/

struct point
{
	int xpos;
	int ypos;
	struct point* ptr;
};

int main(void)
{
	struct point pos1 = { 1, 1 };
	struct point pos2 = { 2, 2 };
	struct point pos3 = { 3, 3 };

	pos1.ptr = &pos2;     // pos1�� pos2�� ����
	pos2.ptr = &pos3;     // pos2�� pos3�� ����
	pos3.ptr = &pos1;     // pos3�� pos1�� ����

	printf("���� �������... \n");
	printf("[%d, %d]��(��) [%d, %d] ���� \n",
		pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d, %d]��(��) [%d, %d] ���� \n",
		pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d, %d]��(��) [%d, %d] ���� \n",
		pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
	return 0;
}

//�߰����
// ����ü����, ��� ����, ���� ���ٹ�� ����