#include<iostream>
#include<vector>
using namespace std;

int N, M;
int data_combination[40][40];

int Combination(int n, int r)
{
	if (data_combination[n][r] != 0)
	{
		return data_combination[n][r];
	}
	if (n == r || r == 0)
	{
		return 1;
	}
	else
	{
		int ret = Combination(n - 1, r - 1) + Combination(n - 1, r);
		data_combination[n][r] = ret;
		return ret;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int test_case; cin >> test_case;
	for (int tc = 1; tc <= test_case; tc++)
	{
		cin >> N >> M;

		int ans = Combination(M, N);

		cout << ans << endl;

	}

	return 0;
}