#include <stdio.h>


int main(void) {
	int x = 0; //정수 변수
	char c = ' '; //문자 변수
	printf("정수입력\n");
	scanf_s("%d", &x); //받을때 주소를 지정
	printf("\n문자입력\n");
	scanf_s("%c", c);

	printf("\n받은것 정수 : %d 문자: %c\n", x, c);
	return 0;
}