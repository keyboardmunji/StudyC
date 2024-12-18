#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	//Q : 8-1-1: 1~100사이에서 7의배수 또는 9의 배수 출력
	int i, j, num1, num2, num3;
	double result;
	for (i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 && i % 9 == 0)
			printf("7과 9의 배수 : %d\n", i);
		else if (i % 7 == 0)
			printf("7의 배수 : %d\n", i);
		else if (i % 9 == 0)
			printf("9의 배수 : %d\n", i);
	}
	//Q : 8-1-2 : 두 개의 정수를 입력 받아서 두 수의 차를 출력
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	printf("두 수의 차 : %d\n", num1 > num2 ? num1 - num2 : num2 - num1);
	//Q : 8-1-3 : 3개의 점수를 입력받은 뒤 평균이 90,80,70,60,50,50미만으로 성적을 구분지어 출력
	printf("국어 점수 입력 : ");
	scanf("%d", &num1);
	printf("수학 점수 입력 : ");
	scanf("%d", &num2);
	printf("영어 점수 입력 : ");
	scanf("%d", &num3);
	
	result = (num1 + num2 + num3) / 3.0; 
	if (result >= 90)
		printf("A\n");
	else if (result >= 80)
		printf("B\n");
	else if (result >= 70)
		printf("C\n");
	else if (result >= 60)
		printf("D\n");
	else if (result >= 50)
		printf("E\n");
	else
		printf("F\n");
	//Q : 8-1-4 : 8-1-3문제를 조건 연산자로 해결
	printf("%c\n", result >= 90 ? 'A' : result >= 80 ? 'B' : result >= 70 ? 'C' : result >= 60 ? 'D' : result >= 50 ? 'E' : 'F');

	//Q : 8-2-1 : 구구단 2단,4단,6단,8단만 출력 2단은 2*2까지 4단은 4*4까지 이런식으로, 최대한 break,continue 사용 -> 억지로 해봄
	for (i = 1; i <= 9; i ++)
	{
		if (i % 2 != 0)
			continue;
		for (j = 1; j < 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			if (i == j)
				break;
		}
	}
	
	// Q : 8-2-2 : AZ + ZA가 99인 모든 A,Z를 구하시오 AZ는 곱이 아니라 10의 자리수인 A, 일의자리인 Z임. -> 이 예제는 굳이 continue를 왜쓰는지 모르겠음.

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i + j == 9)
				printf("(%d,%d)\n", i, j);
		}
	}
	//Q : 8-3-1 : 입력받은 값의 범위를 알려주는 프로그램. -> num1 / 10으로 분기를 나눌수 있었음. 그래도 이런것은 else if 쓸듯.
	printf("정수 입력 : ");
	scanf("%d", &num1);
	num2 = num1 < 0 ? 0 : num1 < 10 ? 1 : num1 < 20 ? 2 : num1 < 30 ? 3 : 4;
	switch (num2)
	{
	case 0:
		printf("0미만\n");
		break;
	case 1:
		printf("0이상 10 미만\n");
		break;
	case 2:
		printf("10이상 20미만\n");
		break;
	case 3:
		printf("20이상 30미만\n");
		break;
	case 4:
		printf("30이상\n");
		break;
	}
	
	return 0;

}