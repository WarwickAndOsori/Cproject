#include <stdio.h>


int main(void) {
	int x = 0; //���� ����
	char c = ' '; //���� ����
	printf("�����Է�\n");
	scanf_s("%d", &x); //������ �ּҸ� ����
	printf("\n�����Է�\n");
	scanf_s("%c", c);

	printf("\n������ ���� : %d ����: %c\n", x, c);
	return 0;
}