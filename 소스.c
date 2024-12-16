#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	// Q: 5 - 1 - 1 좌하단 x,y값과 우상단 x,y값을 받은 후 직사각형 넓이 계산
	int x1, x2, y1, y2, result;
	char b;
	double num1, num2;
	int a;
	printf("좌하단 x,y좌표 입력 : ");
	scanf("%d %d", &x1, &y1);
	printf("우상단 x,y좌표 입력 : ");
	scanf("%d %d", &x2, &y2);
	result = (x2 - x1) * (y2 - y1);
	printf("직사각형 넓이는 %d 입니다.\n", result);
	// Q : 5-1-2 : 실수 2개받고 사칙연산 진행
	printf("두 개의 실수 입력하세요 : ");
	scanf("%lf %lf", &num1, &num2);
	printf("덧셈 : %f 뺄셈 : %f 곱셉 : %f 나눗셈 : %f\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);
	//Q : 5-1-4 : 사용자가 아스키 코드값 입력시 그에 상응하는 문자 출력*/
	printf("아스키 코드 정수 입력 : ");
	scanf("%d", &a);
	printf("상응하는 문자 : %c\n", a);
	// Q : 5-1-5 : 사용자가 문자 입력시 그에 맞는 아스키 코드 출력
	printf("문자 한개 입력 : ");
	scanf(" %c", &b);
	printf("%d", b);
	return 0;

}