#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int ggg(char word[]) {
    int length;
    int ture = 0;
    length = strlen(word);

    for (int i = 0; i <= length; i++) {
        if (word[i] == word[length - 1 - i])
        ture = 1;
        else {
            ture = 0;
        }
    }
 
}

int main() {

    char word[20];
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%s", word);

    if (ggg(word) == 1)
        printf("ȸ��");
    else
        printf("ȸ���ƴ�");


    return 0;
}
