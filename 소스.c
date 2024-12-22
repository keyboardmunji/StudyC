#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//Q : 16-1-1 : 구구단 2,3,4단을 2차원 배열에 저장 후 출력
	int a[3][9];
	int num[2][4] = { {1,2,3,4,},{5,6,7,8} };
	int num1[4][2];
	int num2[5][5];
	int i, j, sum1, sum2;
	for (i = 2; i < 5; i++)
		for (j = 1; j <= 9; j++)
			a[i - 2][j - 1] = i * j;
	printf("저장 한 구구단 출력 \n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 9; j++)
			printf("%d * %d = %d\n", i + 2, j + 1, a[i][j]);
	//Q ; 16-1-2 : 배열 돌리기?
	printf("\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d", num[i][j]);
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			num1[j][i] = num[i][j];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d", num1[i][j]);
		printf("\n");
	}
	printf("\n");
	//Q : 16-1-3 : 4명의 사람 4개의 과목별 총점 계산 후 저장
	for (i = 0; i < 4; i++)
	{
		printf("%d번째 사람 점수 입력 : ", i + 1);
		scanf("%d %d %d %d", &num2[i][0], &num2[i][1], &num2[i][2], &num2[i][3]);
	}
	for (i = 0; i < 4; i++)
	{
		sum1 = sum2 = 0;
		for (j = 0; j < 4; j++)
		{
			sum1 += num2[i][j];
			sum2 += num2[j][i];
		}
		num2[i][4] = sum1;
		num2[4][i] = sum2;
	}
	for (i = 0, sum1 = 0; i < 4; i++)
		sum1 += num2[4][i];
	num2[4][4] = sum1;
	printf("\n 점수 계산 완료 \n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%3d", num2[i][j]);
		printf("\n");
	}

	return 0;
}


