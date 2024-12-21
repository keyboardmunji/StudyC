#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void odd(int[]);
void even(int[]);
int str_len(char[]);
int jinsu(int,int[]);
void judge(char[], int);
void bubble_down(int[]);

int main()
{
	//Q : 15-1-1 : 10개의 정수를 불러들여서 홀수 짝수를 구분해서 입력받기. 단, 홀짝 구분은 함수 이용. 
	//짤막한 지식 : 짝수 n = 2k (k는 정수) 로 정의되고 홀수 n = 2k+1 (k는 정수) 로 정의된다!
	int num1[10] , num3[32];
	int i, num2, sum, num4, swap;
	char word[40];
	printf("총 10개의 숫자 입력 \n");
	for (i = 0; i < 10; i++)
	{
		printf("입력 : ");
		scanf("%d", &num1[i]);
	}
	odd(num1);
	even(num1);
	//Q : 15-1-2 : 사용자로부터 10진수 정수를 하나 입력받음, 이를 2진수로 변환해서 출력
	printf("10진수 정수 입력 : ");
	scanf("%d", &num2);
	if (num2 < 0)
	{
		printf("음의 정수 이므로 처음에 부호비트 1이 붙습니다.\n");
		num4 =jinsu(num2*(-1), num3);
		for (i = 0; i < num4; i++)
			if (num3[i] == 0)
				num3[i] = 1;
			else
				num3[i] = 0;
		num3[0] += 1;
		for (i = 0; i < num4; i++)
		{
			if (num3[i] == 2)
			{
				num3[i] = 0;
				num3[i + 1] += 1;
			}
		}
		printf("1");
		if (num3[num4] == 1)
			num4 += 1;
		for (i = num4 - 1; i >= 0; i--)
		{
			printf("%d", num3[i]);
		}
	}
	else {
		num4 = jinsu(num2, num3);
		for (i = num4 - 1; i >=0; i--)
		{
			printf("%d", num3[i]);
		}
	}
	printf("\n");
	//Q : 15-1-3 : 10개의 정수를 입력받는데, 짝수면 뒤에서부터저장, 홀수면 앞에서 부터 저장
	sum = num4 = 0;
	printf("정수 10개 입력 \n");
	for (i = 0; i < 10; i++)
	{
		printf("입력 : ");
		scanf("%d", &num2);
		if (num2 % 2 == 0)
		{
			num1[9 - sum] = num2;
			sum++;
		}
		else {
			num1[num4] = num2;
			num4++;
		}
	}
	printf("배열 요소 출력 : ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", num1[i]);
	}
	printf("\n");
	//Q : 15-1-4 : 대소문자 까지 일치하는 회문인지를 판단하는 함수 작성 -> 회문 앞으로 읽나 뒤로 읽나 같은 단어.
	printf("문자열 입력 : ");
	scanf("%s", word);
	num2 = str_len(word);
	judge(word, num2);
	//Q : 15-1-5 : 버블 정렬 내림차순으로 구현하기.
	printf("7개의 정수를 입력\n");
	for (i = 0; i < 7; i++)
	{
		printf("입력 : ");
		scanf("%d", &num1[i]);
	}
	bubble_down(num1);
	for (i = 0; i < 7; i++)
	{
		printf("%d ", num1[i]);
	}
	return 0;
}

void odd(int num[])
{
	int i;
	printf("홀수 출력 : ");
	for (i = 0; i < 10; i++)
		if (num[i] % 2 != 0)
			printf(" %d", num[i]);
	printf("\n");
}

void even(int num[])
{
	int i;
	printf("짝수 출력 : ");
	for (i = 0; i < 10; i++)
		if (num[i] % 2 == 0)
			printf(" %d", num[i]);
	printf("\n");
}

int str_len(char w[])
{
	int i;
	for (i = 0;; i++)
	{
		if (w[i] == 0)
			break;
	}
	return i;
}

void judge(char w[], int len)
{
	int i, j = 0;
	for (i = 0; i < len / 2; i++)
	{
		if (w[i] != w[len - i - 1])
			j = 1;
	}
	if (j == 0)
		printf("회문 입니다.\n");
	else
		printf("회문이 아닙니다.\n");
}

void bubble_down(int num[])
{
	int i, j, swap;
	for (i = 6; i >= 0; i--)
	{
		for (j = 0; j < i - 1; j++)
		{
			if (num[j] < num[j + 1])
			{
				swap = num[j];
				num[j] = num[j + 1];
				num[j + 1] = swap;
			}
		}
	}
}

int jinsu(int num, int num1[])
{
	int i = 0;
	while (num > 1)
	{
		num1[i++] = num % 2;
		num /= 2;
	}
	num1[i] = num;
	return i + 1;
}