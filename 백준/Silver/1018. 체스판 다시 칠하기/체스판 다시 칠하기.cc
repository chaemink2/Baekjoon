#include<iostream>
#include<cmath>
using namespace std;

// 아닌 것들 다 1로 해서 다른 배열에 저장
// 8*8로 치고 다 더했을 때 최소값
// 8*8의 시작점은 맵의 크기에 따라서

char map[51][51];
int temp1[51][51];
int temp2[51][51];

int main()
{
	int N, M; cin >> N >> M;

	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < M; x++)
		{
			cin >> map[y][x];
		}
	}

	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < M; x++)
		{
			int num = abs(y - x);

			
			if (num % 2 == 0 && map[y][x] == 'W')
			{
				temp1[y][x] += 1;
			}
			else if (num % 2 == 1 && map[y][x] == 'B')
			{
				temp1[y][x] += 1;
			}
			
			if (num % 2 == 0 && map[y][x] == 'B')
			{
				temp2[y][x] += 1;
			}
			else if (num % 2 == 1 && map[y][x] == 'W')
			{
				temp2[y][x] += 1;
			}
			
		}
	}

	int min = 65, sum1 = 0, sum2 = 0;

	for (int y = 0; y <= N - 8; y++)
	{
		
		for (int x = 0; x <= M - 8; x++)
		{
			sum1 = 0, sum2 = 0;
			for (int yy = 0; yy < N; yy++)
			{
				for (int xx = 0; xx < M; xx++)
				{
					if (yy >= y && yy < y + 8 && xx >= x && xx < x + 8)
					{
						sum1 += temp1[yy][xx];
						sum2 += temp2[yy][xx];
					}
				}
			}
			if (sum1 <= sum2 && sum1 <= min)
			{
				min = sum1;
			}
			else if (sum2 <= sum1 && sum2 <= min)
			{
				min = sum2;
			}
		}
		
	}

	cout << min;

	return 0;
}