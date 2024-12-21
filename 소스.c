#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SquareByValue(int);
void SquareByReference(int*);
void Swap3(int*, int*, int*);

int main()
{
	//Q :14-1-1: 2가지 방식으로 제곱을 계산하는 함수 작성
	int num, num1, num2, num3;
	printf("정수 한개 입력 : ");
	scanf("%d", &num);
	printf("제곱 값 : %d\n", SquareByValue(num));
	SquareByReference(&num);
	printf("제곱 값 : %d\n", num);
	//Q :14-1-2: 세 변수에 저장된 값을 서로 뒤바꾸는 함수 by pointer num1 -> num2, num2 -> num3, num3 -> num1
	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d\n", num1, num2, num3);
	
	return 0;
}

int SquareByValue(int num1)
{
	return num1 * num1;
}

void SquareByReference(int* ptr1)
{
	*ptr1 *= *ptr1;
}

void Swap3(int* num1, int* num2, int* num3)
{
	int box;
	box = *num1;
	*num1 = *num3;
	*num3 = *num2;
	*num2 = box;
}