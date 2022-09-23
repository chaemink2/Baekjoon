#include<iostream>
#include<algorithm>
using namespace std;

int arr[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N; cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N);

	int M; cin >> M;

	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;

		int start = 0;
		int end = N - 1;
		int flag = 0;

		while (start <= end)
		{
			int mid = (start + end) / 2;

			if (arr[mid] == num)
			{
				flag = 1;
				break;
			}
			else if (arr[mid] > num)
			{
				end = mid - 1;
			}
			else
			{
				start = mid + 1;
			}
		}

		cout << flag << '\n';
	}

	return 0;
}