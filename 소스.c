#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// Q: 12-1-2 : 알아서 해석하셈.
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp;
	
	*ptr1 += 10;
	*ptr2 -= 10;

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("ptr1 : %d, ptr2 : %d \n", *ptr1, *ptr2);
	//예상 결과랑 일치

	return 0;
}