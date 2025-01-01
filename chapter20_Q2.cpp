#include <bits/stdc++.h>
using namespace std;

// 달팽이 배열 만들기.

int main()
{
	int box[100][100] = { 0, };
	int n, num = 1;
	int x = 1, y = 1, c = 0;
	cin >> n;
	while (1)
	{
		if (c == 0)
		{
			for (; x <= n && box[y][x] == 0; x++)
				box[y][x] = num++;
			x--;
			y++;
			c = 1;
		}
		else if (c == 1)
		{
			for (; y <= n && box[y][x] == 0; y++)
				box[y][x] = num++;
			y--;
			x--;
			c = 2;
		}
		else if (c == 2)
		{
			for (; x > 0 && box[y][x] == 0; x--)
				box[y][x] = num++;
			y--;
			x++;
			c = 3;
		}
		else if (c == 3)
		{
			for (; y > 0 && box[y][x] == 0; y--)
				box[y][x] = num++;
			y++;
			x++;
			c = 0;
		}
		if ((n & 1) && x == n / 2 + 1 && y == n / 2 + 1)
			break;
		else if (!(n & 1) && y == n / 2 + 1 && x == n / 2) // 짝수일때 n&0하면 0을 반환하므로 무조건 거짓임.
			break;
	}
	box[y][x] = num;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout.width(4);
			cout << box[i][j];
		}
		cout << "\n";
	}
	return 0;
}