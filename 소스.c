#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	//Q:4-4-1 입력받은 정수값을 비트연산자를 이용하여 부호를 바꾸어 출력하기.
	int num1;
	printf("정수 1개를 입력하세요. : ");
	scanf("%d", &num1);
	num1 = (~num1) + 1;
	printf("%d\n", num1);
	//Q:4-4-2 3*8/4를 비트 연산자를 통해 구현 해보자.
	printf("3*8/4의 계산결과 : %d", (3 << 3) >> 2);
	return 0;

}