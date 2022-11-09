#include<iostream>

using namespace std;

//struct Coord
//{
//	int ty, tx;
//};

int dy[] = { 0,0,-1,1 };
int dx[] = { -1,1,0,0 };

int map[51][51];
int visited[51][51];

int num_worm;
int col, row, num;

void initial(void)
{
	for (int y = 0; y < 51; y++)
	{
		for (int x = 0; x < 51; x++)
		{
			map[y][x] = 0;
			visited[y][x] = 0;
		}
	}
	num_worm = 0;
}

void solution(int y, int x)
{	
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i]; int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= col || nx >= row) continue;
		if (visited[ny][nx] == 1) continue;
		visited[ny][nx] = 1;
		if (map[ny][nx] == 1) solution(ny, nx);
	}
}

int main(void)
{
	int test_case; cin >> test_case;
	
	for (int tc = 1; tc <= test_case; tc++)
	{
		cin >> row >> col >> num;

		initial();

		for (int i = 0; i < num; i++)
		{
			int ty, tx; cin >> tx >> ty;
			map[ty][tx] = 1;
		}

		for (int y = 0; y < col; y++)
		{
			for (int x = 0; x < row; x++)
			{
				if (map[y][x] == 1 && visited[y][x] == 0)
				{
					num_worm++;
					solution(y, x);
				}
			}
		}

		cout << num_worm << "\n";
	}	

	return 0;
}