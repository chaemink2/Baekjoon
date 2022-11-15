#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int N, M, K, ans;

struct Cell
{
	int x, y, num, dir;
};
vector<Cell> virus;

int map[100][100]; // 3차원 배열
int sum[101];

void initial(void)
{
	virus.clear();
}

void solution(void)
{
	int dy[] = {-1,1,0,0};
	int dx[] = {0,0,-1,1}; // 상0 하1 좌2 우3

	while (M--)
	{
		// map은 idx
		// sum은 최대 미생물 수 저장
		memset(map, 0, sizeof(map));
		memset(sum, 0, sizeof(sum));
		for (int i = 0; i < virus.size(); i++) {
			if (virus[i].num == 0) continue;
			virus[i].x += dx[virus[i].dir];
			virus[i].y += dy[virus[i].dir];
			if (virus[i].x == 0 || virus[i].y == 0 || virus[i].x == N - 1 || virus[i].y == N - 1) {
				virus[i].num /= 2;
				if (virus[i].dir == 0) virus[i].dir = 1;
				else if (virus[i].dir == 1) virus[i].dir = 0;
				else if (virus[i].dir == 2) virus[i].dir = 3;
				else virus[i].dir = 2;
			}
			// 어떤 좌표에 딱 하나만 있을때
			if (map[virus[i].y][virus[i].x] == 0) {
				map[virus[i].y][virus[i].x] = i + 1;
				sum[i + 1] = virus[i].num;
			}
			//겹칠때
			else {
				int idx = map[virus[i].y][virus[i].x];
				virus[idx - 1].num += virus[i].num;
				if (sum[idx] < virus[i].num) {
					sum[idx] = virus[i].num;
					virus[idx - 1].dir = virus[i].dir;
				}
				virus[i].num = 0;
			}

		}

		// z축에 같은 좌표인 군집들이 쌓이는데, 쌓인 군집들을 하나의 z좌표에 어떻게 합쳐주고 방향을 부여해줄까?
	}
}

int main(void)
{
	int test_case; cin >> test_case;
	int y, x, num, dir;

	for (int tc = 1; tc <= test_case; tc++)
	{
		cin >> N >> M >> K;

		initial();

		for (int i = 0; i < K; i++)
		{
			cin >> y >> x >> num >> dir;
			virus.push_back({ x, y, num, dir - 1 });
		}

		solution();	

		ans = 0;
		for (int i = 0; i < virus.size(); i++) ans += virus[i].num;
		cout << "#" << tc << " " << ans << "\n";
	}

	return 0;
}