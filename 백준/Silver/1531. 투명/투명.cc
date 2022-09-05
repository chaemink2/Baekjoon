#include<iostream>
using namespace std;

int map[102][102];

int main()
{
	int n, m, cnt = 0; cin >> n >> m;
	for (int tc = 1; tc <= n; tc++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int y = 0; y < 101; y++)
		{
			for (int x = 0; x < 101; x++)
			{
				if (y >= y1 && y <= y2 && x >= x1 && x <= x2)
				{
					map[y][x] += 1;
				}
			}
		}
	}
	
	for (int y = 0; y < 101; y++)
	{
		for (int x = 0; x < 101; x++)
		{
			if (map[y][x] > m)
			{
				cnt++;
			}
		}
	}

	cout << cnt;
	return 0;
}