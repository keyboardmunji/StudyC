#include <bits/stdc++.h>
using namespace std;

//가위 바위 보 게임 만들기

int main(void)
{
	const char* str[3] = { "바위","가위","보" };
	int n, n1;
	int win, draw;
	win = draw = 0;
	srand((int)time(NULL));
	while (1)
	{
		cout << "바위는 1 가위는 2 보는 3 :";
		cin >> n;
		n1 = (rand() % 3) + 1;
		if (n > 3 || n < 1)
		{
			cout << "다시 내세요!\n";
		}
		else {
			cout << "당신이 낸것은 " << str[n-1] << " 컴퓨터가 낸 것은 " << str[n1-1] << "\n";
			if (n == n1)
			{
				cout << "결과 : 비겼습니다\n";
				draw++;
			}
			else if (n == 3)
			{
				if (n1 == 1)
				{
					cout << "결과 : 이겼습니다\n";
					break;
				}
				else
				{
					cout << "결과 : 졌습니다 \n";
					win++;
				}
			}
			else if (n == 2)
			{
				if (n1 == 1)
				{
					cout << "결과 : 졌습니다.\n";
					win++;
				}
				else {
					cout << "결과 : 이겼습니다\n";
					break;
				}
			}
			else if (n == 1) {
				if (n1 == 2)
				{
					cout << "결과 : 이겼습니다\n";
					break;
				}
				else {
					cout << "결과 : 졌습니다.\n";
					win++;
				}
			}
		}
	}
	cout << "컴퓨터가 이긴 횟수 : " << win << "\n비긴횟수 : " << draw;
	return 0;
}