#include<iostream>
#include<string>
#include<climits>
#include<queue>
#include<algorithm>
using namespace std;

int n, m, ans;
int map[1000][1000];
int visited1[1000][1000]; // 벽 안 부셨을 때
int visited2[1000][1000];  // 벽 부시고 나서

int dy[] = { -1,1,0,0 };
int dx[] = { 0,0,-1,1 };
bool arrive = false;

struct Node {
	int y, x, cnt;
};

void input()
{
	cin >> n >> m;
	for (int y = 0; y < n; y++)
	{
		string map_row;
		cin >> map_row;

		for (int x = 0; x < m; x++)
		{
			map[y][x] = map_row[x] - '0';
		}
	}
	ans = INT_MAX;
}

void bfs() {
	queue<Node> q;
	q.push({ 0, 0, 0 });
	visited1[0][0] = 1;
	visited2[0][0] = 1;

	while (!q.empty()) {
		Node now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			Node next = { now.y + dy[i], now.x + dx[i], now.cnt };

			// 맵 벗어났을 때
			if (next.y < 0 || next.y >= n || next.x < 0 || next.x >= m) continue;

			// 벽을 부순 적이 없나요? 있나요?
			if (now.cnt == 1) {
				if (map[next.y][next.x] == 1) continue; // 벽 만났을 때

				if (visited1[next.y][next.x] != 0 || visited2[next.y][next.x] != 0) continue; // 이미 지나간 적이 있음

				visited2[next.y][next.x] = visited2[now.y][now.x] + 1;
				q.push(next);
			}
			else {
				if (visited1[next.y][next.x] != 0) continue;

				// 벽이냐? 벽이 아니냐?
				if (map[next.y][next.x] == 1) {
					next.cnt = 1;
					visited2[next.y][next.x] = visited1[now.y][now.x] + 1;
					q.push(next);
				}
				else {
					visited1[next.y][next.x] = visited1[now.y][now.x] + 1;
					q.push(next);
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	input();
	bfs();

	int dist1 = visited1[n - 1][m - 1];
	int dist2 = visited2[n - 1][m - 1];

	if (dist1 == 0) dist1 = INT_MAX;
	if (dist2 == 0) dist2 = INT_MAX;

	ans = min(ans, dist1);
	ans = min(ans, dist2);

	if (ans == INT_MAX) ans = -1;

	cout << ans;

	return 0;
}