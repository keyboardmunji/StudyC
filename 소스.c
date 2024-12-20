#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//Q : 13-1-1 : 배열길이가 5인 배열을 초기화 하고 포인터를 이용하여 각 값에 2를 더해보자.
	int arr[5] = { 1,2,3,4,5 };
	int arr2[6] = { 1,2,3,4,5,6 };
	int* ptr1 = arr;
	int* ptr2 = arr2;
	int* ptr3 = arr2 + 5;
	int i, sum = 0;
	printf("변경 전 : ");
	for (i = 0; i < 5; i++)
		printf("%d ",arr[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		*(ptr1++) += 2;
	printf("변경 후 : ");
	for (i = 0; i < 5; i++)
		printf("%d ", *(arr+i)); // 다른식으로 접근해봄
	printf("\n\n");
	//Q : 13-1-2 : 1번 문제에서 배열 접근 방식을 덧셈으로 변경 -> ptr1을 바꾸지 말고
	ptr1 = arr;
	printf("변경 전 : ");
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		*(ptr1+i) += 2;
	printf("변경 후 : ");
	for (i = 0; i < 5; i++)
		printf("%d ", *(arr + i)); // 다른식으로 접근해봄
	printf("\n");
	//Q : 13-1-3 : 마지막 주소값을 받은 후 이름 감소 연산으로 모든 배열요소의 합 구하기.
	ptr1 = arr + 4;
	for (i = 0; i < 5; i++)
		sum += *(ptr1--);
	printf("총 합 : %d\n", sum);
	//Q : 13-1-4 : 배열길이가 6인 배열에 미리 초기화한 값을 포인터 변수 2개를 활용하여 반전시키기.
	printf("변경 전 : ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		sum = *(ptr2 + i);
		*(ptr2 + i) = *(ptr3 - i);
		*(ptr3 - i) = sum;
	}
	printf("변경 후 : ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	printf("\n"); 
	return 0;
}