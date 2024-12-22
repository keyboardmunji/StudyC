#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MaxAndMin(int[], int, int**, int**);

int main()
{
	//Q : 17-1-1 : maxptr에는 가장 큰 값의 주소, minptr에는 가장 작은 값의 주소를 담는 그런 함수만들기
	int* maxptr;
	int* minptr;
	int arr[5], i;
	printf("5개의 정수 입력 \n");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxptr, &minptr);
	printf("최댓값 : %d, 최솟값 : %d\n", *maxptr, *minptr);

	return 0;
}

void MaxAndMin(int arr[],int len, int** max, int** min)
{
	int i;
	*max = *min = &arr[0];
	for (i = 1; i < len; i++)
	{
		if (arr[i] > **max)
			*max = &arr[i];
		else if (arr[i] < **min)
			*min = &arr[i];
	}
}

