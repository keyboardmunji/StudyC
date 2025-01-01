#include <bits/stdc++.h>
using namespace std;

// 야구게임 만들기

int main(void)
{
	srand((int)time(NULL));
	int a[3];
	int n[3];
	int count;
	bool test = true;
	for (int i = 0; i < 3; i++)
	{
		a[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				i--;
				break;
			}
		}
	}
	cout << "start game!\n";
	count = 0;
	while (test)
	{
		int strike = 0, ball = 0;
		cout << "3개의 숫자 선택 : ";
		cin >> n[0] >> n[1] >> n[2];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (a[i] == n[j])
				{
					if (i == j)
						strike++;
					else
						ball++;
				}
			}
		}
		cout << ++count << "번째 결과 : " << strike << "strike, " << ball << "ball!\n";
		if (strike == 3)
		{
			cout << "Game Over!\n";
			break;
		}
	}
	return 0;
}