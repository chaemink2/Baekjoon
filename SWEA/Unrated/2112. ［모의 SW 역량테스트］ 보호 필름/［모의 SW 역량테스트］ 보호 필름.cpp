#include<iostream>

using namespace std;

int D, W, K;
int arr[13][20];
int flags[13];
int ans;

void initial(void)
{
	ans = 1234567891;

	for (int y = 0; y < 13; y++)
	{
		for (int x = 0; x < 20; x++)
		{
			arr[y][x] = 0;
		}
		flags[y] = 0;
	}
}

bool check(void)
{
	int temp = 0, cnt = 0, sum = 0;
	bool flag;

	for (int x = 0; x < W; x++)
	{
		for (int y = 0; y < D - K + 1; y++)
		{
			temp = arr[y][x];
			cnt = 1;
			flag = false;

			for (int i = y + 1; i < D; i++)
			{
				if (temp == arr[i][x]) cnt++;
				else break;
			}

			if (cnt >= K) flag = true;
			if (flag == true) break;
		}
		
		if (flag == true) sum++;
		else return false;
	}

	if (sum == W) return true;
	else return false;
}

void solution(int idx, int cnt)
{
	if (cnt >= ans) return;
	if (check() == true && ans > cnt)
	{
		ans = cnt;
		return;
	}

	for (int y = idx; y < D; y++)
	{
		if (flags[y] != 0) continue;
		int temp[20];

		for (int x = 0; x < W; x++)
		{
			temp[x] = arr[y][x];
		}
		
		flags[y] = 1;

		for (int x = 0; x < W; x++) // A
		{
			arr[y][x] = 0;
		}

		solution(y + 1, cnt + 1);
		flags[y] = 2;

		for (int x = 0; x < W; x++) // B
		{
			arr[y][x] = 1;
		}

		solution(y + 1, cnt + 1);
		flags[y] = 0;

		for (int x = 0; x < W; x++)
		{
			arr[y][x] = temp[x];
		}
	}
}

int main(void)
{
	int test_case; cin >> test_case;

	for (int tc = 1; tc <= test_case; tc++)
	{
		cin >> D >> W >> K;

		initial();

		for (int y = 0; y < D; y++)
		{
			for (int x = 0; x < W; x++)
			{
				cin >> arr[y][x];
			}
		}

		solution(0, 0);

		cout << "#" << tc << " " << ans << "\n";
	}

	return 0;
}