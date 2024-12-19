#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Max_number(int, int, int);
int Min_number(int, int, int); 
double CelToFah(double);
double FahToCel(double);
int AddTotal(int);
void Fibonacci(int);

int main(void)
{
	//Q : 9-1-1 : 세개의 인자를 받아서 가장큰값과 가장 작은값을 반환하는 함수 작성.
	int num1, num2, num3, i;
	double num4;
	printf("세개의 수를 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰 값 : %d  가장 작은 값 : %d\n", Max_number(num1, num2, num3), Min_number(num1, num2, num3));
	//Q : 9-1-2 : 섭씨 -> 화씨, 화씨 -> 섭씨로 바꾸어주는 2개의 함수 작성
	while (1)
	{
		printf("Fah - 1 , Cel - 2 : ");
		scanf("%d", &num1);
		if (num1 == 1)
		{
			printf("Fah : ");
			scanf("%lf", &num4);
			printf("Cel : %f\n", FahToCel(num4));
			break;
		}
		else if (num1 == 2)
		{
			printf("Cel : ");
			scanf("%lf", &num4);
			printf("Fah : %f\n", CelToFah(num4));
			break;
		}
		else
			printf("not 1 or 2 , ");
	}
	//Q : 9-1-3 : 인자로 전달된 수만큼 피보나치 수열 출력
	printf("몇번째 까지 출력 ? : ");
	scanf("%d", &num1);
	if (num1 < 1)
	{
		printf("1이상의 수를 입력하세요.\n");
		return -1;
	}
	Fibonacci(num1);
	printf("\n");
	//Q : 9-2-1 : 사용자가 입력하는 값을 누적하여 합계를 출력하는 프로그램을 static 변수로 대체하여 프로그램 짜보기
	for (i = 0; i < 3; i++)
	{
		printf("입력 : ");
		scanf("%d", &num1);
		printf("누적 : %d \n", AddTotal(num1));
	}
	return 0;

}

int Max_number(int num1, int num2, int num3)
{
	return num1 > num2 ? num1 > num3 ? num1 : num3 : num2 > num3 ? num2 : num3;
}

int Min_number(int num1, int num2, int num3)
{
	return num1 < num2 ? num1 < num3 ? num1 : num3 : num2 < num3 ? num2 : num3;
}

double CelToFah(double Cel)
{
	return 1.8 * Cel + 32;
}

double FahToCel(double Fah)
{
	return (Fah - 32) / 1.8;
}

void Fibonacci(int num)
{
	int i, a = 0, b = 1, box;
	if (num == 1)
		printf("0\n");
	else
	{
		printf("0 1 ");
		for (i = 2; i < num; i++)
		{
			printf("%d ", a + b);
			box = a + b;
			a = b;
			b = box;
		}
	}
	
}

int AddTotal(int num)
{
	static int total;
	total += num;
	return total;
}