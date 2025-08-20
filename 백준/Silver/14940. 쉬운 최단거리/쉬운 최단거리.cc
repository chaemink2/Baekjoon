#include <queue>
#include <iostream>
using namespace std;



int arr[1001][1001]{};
int answer[1001][1001]{};

int main() {
	struct item {
		int x, y, n;
	};
	int n, m, num, x, y;
	cin >> n >> m;

	queue<item> q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> num;
			arr[i][j] = num;
			answer[i][j] = 2e9;
			if (arr[i][j] == 2) {
				x = j;
				y = i;
				answer[y][x] = 0;
				q.push({x, y, 1});
			}
		}
	}
	int tx[4] = { 0, 1, 0, -1 };
	int ty[4] = { -1, 0, 1, 0 };

	item t;
	int a, b, c, dx, dy;
	while (!q.empty()) {
		t = q.front();
		q.pop();
		a = t.x;
		b = t.y;
		c = t.n;
		for (int i = 0; i < 4; i++) {
			dx = a + tx[i];
			dy = b + ty[i];
			if ((dx >= 0) && (dy >= 0) && (dx < m) && (dy < n) && (arr[dy][dx] == 1) && (answer[dy][dx] > c)) {
				answer[dy][dx] = c;
				q.push({ dx, dy, c + 1 });
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (answer[i][j] == 2e9) {
				if (arr[i][j] == 0) {
					answer[i][j] = 0;
				}
				else {
					answer[i][j] = -1;
				}
			}
			cout << answer[i][j] << " ";
		}
		cout << endl;
	}
}