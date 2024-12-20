#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int, int);
double square_2(int, double);


int main(void)
{
	//Q : 10-1 :10진수 정수를 입력받아서 16진수 출력하기
	int num1, num2, num3, box, i, j, k;
	double num;
	printf("정수 입력 : ");
	scanf("%d", &num1);
	printf("%X\n", num1);
	//Q : 10-2 : 사용자가 2개의 정수를 입력하면 그 사이에있는 모든 구구단 출력
	printf("정수 2개 입력 : ");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		box = num1;
		num1 = num2;
		num2 = box;
	}
	for (i = num1; i <= num2; i++)
	{
		printf("%d단 출력 \n", i);
		for (j = 1; j <= 9; j++)
			printf("%d * %d = %d\n", i, j, i * j);
	}
	//Q : 10-3 : 두개의 정수를 입력바다엇 최대 공약수 구하기.
	printf("2개의 정수 입력 : ");
	scanf(" %d %d", &num1, &num2);
	if (num1 > num2)
	{
		box = num1;
		num1 = num2;
		num2 = box;
	}
	for (i = 1; i <= num2; i++)
		if (num1 % i == 0 && num2 % i == 0)
			box = i;
	printf("두 수의 최대 공약수 : %d\n", box);
	//유클리드 호제법 : a = b*q + r , 0<= r < b 일때 a,b의 최대 공약수는 b,r의 최대 공약수와 같다. -> r = 0이면 b가 최대 공약수이다.
	//이를 이용해보자
	printf("두 수의 최대공약수 : %d\n", gcd(num2, num1));

	//Q : 10-4 : 3500원 보유중, 크림빵 : 500원, 새우깡 : 700원, 콜라 : 400원 각각 1개이상을 사려고 할때 모든 경우 출력
	printf("현재 당신이 소유하고 있는 금액 : 3500\n");
	//1900
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 3; j++)
		{
			for (k = 1; k <= 5; k++)
			{
				if (i * 500 + j * 700 + k * 400 <= 3500)
					printf("크림빵: %d 새우깡 : %d 콜라 : %d\n",i,j,k);
			}
		}
	}
	printf("어떻게 구입하시겠습니까? \n");
	//Q : 10-5 : 10개의 소수를 출력하는 프로그램
	num1 = 0;
	for (i = 2; ; i++)
	{
		box = 1;
		for (j = 2; j <= i; j++)
			if (i % j == 0)
				box++;
		if (box == 2)
		{
			printf("%d ", i);
			num1++;
		}
		if (num1 == 10)
			break;
	}
	printf("\n");
	//Q : 10-6 : 사용자로부터 초를 입력받은 후 이를 시, 분, 초로 나타내기
	printf("초 입력 :");
	scanf("%d", &num1); //?
	scanf("%d", &num1);
	printf("h:%d m:%d s:%d \n", num1 / 3600, (num1 % 3600) / 60, (num1 % 3600) % 60); 
	//Q : 10-7 : 숫자 n을 입력받아서 2^k <= n이 성립하는 k의 최댓값 구하기.
	printf("정수 입력 : ");
	scanf("%d", &num1);
	for (i = 0; ; i++)
	{
		num2 = 1;
		for (j = 0; j < i; j++)
		{
			num2 *= 2;
		}
		if (num1 / num2 == 0)
			break;
	}
	printf("공식을 만족하는 k의 최댓값은 : %d\n", i - 1);
	//Q : 10-8 : 2의 n승을 구하는 함수를 재귀함수로 만들기
	printf("정수 입력 : ");
	scanf("%d", &num1);
	printf("2의 %d승은 %f 입니다.\n",num1,square_2(num1,1.0));

	return 0;
}

int gcd(int num1, int num2)
{
	int r = num1 % num2;
	if (r == 0)
		return num2;
	else
		return gcd(num2, r);
}

double square_2(int num, double a)
{
	if (num == 0)
		return a;
	else if (num > 0)
		return square_2(num - 1, a * 2);
	else
		return square_2(num + 1, a / 2);

}