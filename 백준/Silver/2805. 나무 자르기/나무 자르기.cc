#include<iostream>
#include<algorithm>

using namespace std;

long long arr[1000010];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input
	int N, M; cin >> N >> M;
	long long max_height = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		max_height = max(max_height, arr[i]);
	}

	// binary Search
	long long start = 0;
	long long end = max_height;
	long long ans = 0;
	while (start <= end)
	{
		long long mid = (start + end) / 2;
		long long cnt = 0;
		for (int i = 0; i < N; i++)
			if ((arr[i] - mid) >= 0) cnt += (arr[i] - mid);
		
		if (cnt >= M) {
			ans = max(ans, mid);
			start = mid + 1;
		}
		else end = mid - 1;
	}

	cout << ans;

	return 0;
}