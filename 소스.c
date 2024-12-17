#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	//While문 공부
	//Q:7-1-1 : 사용자에게 양의정수 1개를 입력받게 한 후 그 수만큼 Hello World! 출력
	int num1, i, sum, num2, j;
	double avg;
	printf("숫자 입력 : ");
	scanf("%d", &num1);
	i = 0;
	while (i < num1)
	{
		printf("Hello World!\n");
		i++;
	}
	//Q:7-1-2 : 사용자로 부터 양의 정수를 하나 입력 받은 다음,그 수만큼 3의 배수 출력
	printf("숫자 입력 : ");
	scanf("%d", &num1);
	i = 1;
	while (i <= num1)
	{
		printf("%d ", i * 3);
		i++;
	}
	printf("\n");
	//Q:7-1-3 : 사용자가 0을 입력하기 전까지 입력한 수 모두 더하기
	sum = 0;
	printf("정수 입력(0을 입력하면 이때까지 입력한 수를 더한값 출력) : ");
	scanf("%d", &num1);
	while (num1 != 0)
	{
		sum += num1;
		printf("정수 입력(0을 입력하면 이때까지 입력한 수를 더한값 출력) : ");
		scanf("%d", &num1);
	}
	printf("%d\n", sum);
	// 2번째 방식
	/*
	sum = 0;
	num = 1;
	while(num != 0)
	{
		printf("정수 입력(0을 입력하면 이때까지 입력한 수를 더한값 출력) : ");
		scanf("%d", &num1);
		sum += num1;
	}
	printf("%d\n", sum);
	*/
	//Q:7-1-4 : 입력받은 숫자에 해당하는 구구단을 역순으로 출력
	printf("몇단? : ");
	scanf("%d", &num1);
	i = 9;
	while (i != 0)
	{
		printf("%d * %d = %d\n", num1, i, num1 * i);
		i--;
	}
	//Q:7-1-5 : 사용자로 부터 입력받은 정수의 평균을 출력하는 프로그램 1.몇개 입력받을지 사용자에게, 2. 평균값은 소수점 이하까지 계산
	printf("몇개의 숫자를 입력할꺼임? : ");
	scanf("%d", &num1);
	i = 0;
	sum = 0;
	while (i < num1)
	{
		printf("정수 입력 : ");
		scanf("%d", &num2);
		sum += num2;
		i++;
	}
	avg = (double)sum / num1;
	printf("평균 : %f\n", avg);
	//Q : 7-2-1 : 사용자로부터 5개의 정수를 입력받아서 그수의 합을 구해야함. 단 , 정수는 반드시 1이상이여야 하며, 아니면 다시 요구
	i = 0;
	sum = 0;
	while (i < 5)
	{
		printf("1이상의 정수 입력 : ");
		scanf("%d", &num1);
		while (num1 < 1)
		{
			printf("1이상의 정수가 아님\n");
			printf("다시 1이상의 정수 입력 : ");
			scanf("%d", &num1);
		}
		sum += num1;
		i++;
	}
	printf("%d\n", sum);
	//Q : 7-2-2 : 그림 찍기
	i = 0;
	j = 0;
	while (i < 5)
	{
		while (j < i)
		{
			printf("o");
			j++;
		}
		printf("*\n");
		i++;
		j = 0;
	}
	//Q :7-3-2 : 0이상 100이하의 짝수 합 출력
	sum = 0;
	i = 0;
	do
	{
		i += 2;
		sum += i;
	} while (i < 100);
	printf("%d\n", sum);
	//Q : 7-3-3 : 구구단 2단 부터 9단까지 출력 do~while 문으로
	i = 2;
	j = 1;
	do
	{
		do
		{
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		} while (j <= 9);
		i++;
		j = 1;
	} while (i <= 9);
	// Q : 7-4-1 : 두개의 정수사이의 합을 구하기
	printf("두 정수를 입력하세요. : ");
	scanf("%d %d", &num1, &num2);
	sum = 0;
	for (i = num1; i <= num2; i++)
	{
		sum += i;
	}
	printf("더한 값 : %d\n", sum);
	//Q : 7-4-2 : 팩토리얼 계산
	printf("팩토리얼을 구할 정수를 입력하세요 : ");
	scanf("%d", &num1);
	sum = 1;
	for (i = num1; i >= 1; i--)
		sum *= i;
	printf("팩토리얼 : %d\n", sum);

	return 0;

}