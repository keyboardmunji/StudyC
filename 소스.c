#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	// Q: 3 - 1 : 2개의 정수를 입력받아 빽셈과 곱셈 결과 출력
	int num1, num2;
	printf("2개의 정수를 입력하세요(공백으로 구분) : ");
	scanf("%d %d", &num1, &num2);
	printf("뺄셈 결과 : %d , 곱셈 결과 : %d\n", num1 - num2, num1 * num2);
	// Q : 3 - 2 : 3개의 정수 입력 받아 다음 연산 수행 num1 * num2 + num3
	int num_1, num_2, num_3;
	printf("3개의 정수를 입력하세요. (공백으로 구분) : ");
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	printf("%d * %d + %d = %d\n", num_1, num_2, num_3, num_1 * num_2 + num_3);
	// Q : 3 - 3 : 하나의 정수를 입력 받아서 그 수의 제곱을 출력
	int num;
	printf("하나의 정수를 입력하세요.");
	scanf("%d", &num);
	printf("제곱의 결과 : %d\n", num * num);
	// Q : 3 - 4: 입력 받은 두 수 의 몫과 나머지를 출력
	int a, b;
	printf("2개의 정수를 입력하세요. (공백으로 구분) : ");
	scanf("%d %d", &a, &b);
	printf("몫 : %d , 나머지 : %d \n", a / b, a % b);
	// Q : 3 - 5 : 입력 받은  3개의 정수를 대상으로 (num1 - num2 ) * (num2 + num3) * (num3 % num1)의 결과 출력
	int c, d, e;
	printf("3개의 정수를 입력하세요. (공백으로 구분) : ");
	scanf("%d %d %d", &c, &d, &e);
	printf("(%d-%d)*(%d+%d)*(%d/%d의 나머지) = %d", c, d, d, e, e, c, (c - d) * (d + e) * (e % c));
	return 0;

}