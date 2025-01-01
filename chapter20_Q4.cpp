#include <bits/stdc++.h>
using namespace std;

// 2개의 주사위 결과 출력
int main(void)
{
	srand((int)time(NULL));
	cout << "주사위 1의 결과 : " << rand() % 6 + 1;
	cout << "\n주사위 2의 결과 : " << rand() % 6 + 1;
	return 0;
}