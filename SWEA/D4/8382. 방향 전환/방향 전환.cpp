#include<iostream>
#include<cstdlib>
using namespace std;

int ep_y, ep_x;

int solution(int y, int x)
{
	int ans = 0;

	int dy = abs(y - ep_y);
	int dx = abs(x - ep_x);

	if (dy > dx) {
		while (dy - dx >= 2) {
			dx += 2;
		}
		ans = dy + dx;
	}
	else if (dy < dx) {
		while (dx - dy >= 2) {
			dy += 2;
		}
		ans = dy + dx;
	}
	else {
		ans = dy + dx;
	}

	return ans;
}

// 조건 : 반복 = 상하 움직임 - 좌우 움직임 < 2

int main(void)
{
	int test_case; cin >> test_case;
	for (int tc = 1; tc <= test_case; tc++)
	{
		int sp_y, sp_x;
		cin >> sp_y >> sp_x >> ep_y >> ep_x;

		cout << "#" << tc << " " << solution(sp_y, sp_x) << "\n";
	}

	return 0;
}