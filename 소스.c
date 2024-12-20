#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//Q : 11-1-1 : 정수 5개 입력받아서 최대, 최소, 모든 합을 구하시오. (단, 모든입력을 마친후에 최대,최소, 총합 계산)
	int arr[5];
	int i, j, sum, max, min;
	char arr2[10] = { 'G','o','o','d',' ','T','i','m','e' };
	char arr3[50];
	char box;
	printf("5개의 정수 입력\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	max = arr[0], min = arr[0], sum = arr[0];
	for (i = 1; i < 5; i++)
	{
		sum += arr[i];
		if (arr[i] > max)
			max = arr[i];
		else if (arr[i] < min)
			min = arr[i];
	}
	printf("최댓값 : %d, 최솟값 : %d, 정수의 총 합 : %d\n", max, min, sum);
	//Q : 11-1-2 : 1차원 배열로 "Good time" 저장 후 저장된 내용 출력하기(단, 아직 문자열 저장방식을 안배웠단 전제)
	for (i = 0; i < 9; i++)
		printf("%c", arr2[i]);
	printf("\n");
	//Q : 11-2-1 : 사용자로 부터 하나의 영단어를 입력받아서 입력받은 영단어의 길이를 계산하여 출력
	printf("영단어 하나 입력 : ");
	scanf("%s", arr3);
	for (i = 0;; i++)
		if (arr3[i] == '\0')
			break;
	printf("문자열 길이 : %d\n", i);
	//Q : 11-2-2 : 사용자로부터 영단어를 입력받아서 저장, 그 후 단어를 역순으로 뒤집음, 그 후 출력
	printf("영단어 하나 입력 : ");
	scanf("%s", arr3);
	for (i = 0;; i++)
		if (arr3[i] == '\0')
			break;
	for (j = 0; j < i / 2; j++)
	{
		box = arr3[j];
		arr3[j] = arr3[i - 1 - j];
		arr3[i - j - 1] = box;
	}
	printf("%s\n", arr3);
	//Q : 11-2-3 : 영단어 하나 입력받아서 아스키 코드값이 가장 큰 것을 출력
	printf("영단어 하나 입력 : ");
	scanf("%s", arr3);
	for (i = 0,box = 0;; i++)
	{
		if (arr3[i] == 0)
			break;
		if (arr3[i] > box)
			box = arr3[i];
	}
	printf("%c\n", box);

	return 0;
}