#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n = 0; cin >> n;
	int arr[1001] = { 0, };

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);

	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			ans += arr[j];
		}
	}

	cout << ans;

	return 0;
}