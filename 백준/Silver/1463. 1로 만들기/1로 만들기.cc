#include<iostream>
#include<climits>
using namespace std;

int ans = INT_MAX;

void solution(int x, int cnt)
{
	if (ans <= cnt) return;
	if (x == 1)
	{
		ans = cnt;
		return;
	}
	if (x <= 0) return;

	if (x % 3 == 0) solution(x / 3, cnt + 1);
	if (x % 2 == 0) solution(x / 2, cnt + 1);
	solution(x - 1, cnt + 1);
}

int main()
{
	int x = 0; cin >> x;
	int cnt = 0;

	solution(x, cnt);

	cout << ans;

	return 0;
}