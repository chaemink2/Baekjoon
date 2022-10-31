#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000010];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N, M; cin >> N >> M;
	for (long long i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);
	long long start = 0;
	long long end = arr[N - 1];
	long long ans = 0;
	while (1)
	{
		long long h = (start + end) / 2;
		long long cnt = 0;
		for (int i = 0; i < N; i++)
		{
			if ((arr[i] - h) >= 0) cnt += (arr[i] - h);
//			else cnt = cnt;
		}
		
		if (cnt >= M) {
			ans = max(ans, h);
			start = h + 1;
		}
		else if (cnt < M) end = h - 1;
		//else break;

		if (start > end) break;
	}

	cout << ans;

	return 0;
}