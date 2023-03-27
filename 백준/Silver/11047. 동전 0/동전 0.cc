#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n = 0, k = 0;
	cin >> n >> k;
	int arr[11] = { 0, };


	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int ans = 0;

	for (int i = n-1; i >= 0; i--)
	{
		while (1)
		{
			if (k < arr[i]) break;
			k -= arr[i];
			ans++;
		}
		if (k == 0) break;
	}

	cout << ans;
	
	return 0;
}