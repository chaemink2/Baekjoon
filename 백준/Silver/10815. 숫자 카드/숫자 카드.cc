#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> v;

int binary_search(int start, int end, int target)
{
	while (1)
	{
		int index = (start + end) / 2;
		if (target > v[index])
		{
			start = index+1;
		}
		else if (target < v[index])
		{
			end = index-1;
		}
		else if (target == v[index])
		{
			return 1;
		}
		if (start > end)
		{
			return 0;
		}
	}
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N = 0;
	cin >> N;

	for (int n = 0; n < N; n++)
	{
		int temp; cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	int M = 0;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int target; cin >> target;
		if (target >= v[0] && target <= v[N - 1])
		{
			int ans = binary_search(0, N - 1, target);
			cout << ans << " ";
		}
		else cout << 0 << " ";
	}

	return 0;
}