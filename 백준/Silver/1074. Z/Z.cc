#include<iostream>
using namespace std;

int n, r, c, ans;

void solution(int y, int x, int size)
{
	if (y == r && x == c)
	{
		cout << ans << '\n';
		return;
	}

	if (r < y + size && r >= y && c < x + size && c >= x)
	{
		solution(y, x, size / 2);
		solution(y, x + (size / 2), size / 2);
		solution(y + (size / 2), x, size / 2);
		solution(y + (size / 2), x + (size / 2), size / 2);
	}
	else
	{
		ans += size * size;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> r >> c;

	solution(0, 0, (1 << n));

	return 0;
}