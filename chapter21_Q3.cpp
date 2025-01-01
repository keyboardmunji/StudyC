#include <bits/stdc++.h>
using namespace std;

//0~99 사이의 난수 5개 생성하기.

int main(void)
{
	int n[5];
	srand((int)time(NULL));
	for (int i = 0; i < 5; i++)
		n[i] = rand() % 100;
	for (int i = 0; i < 5; i++) cout << n[i] <<" ";
	return 0;
}