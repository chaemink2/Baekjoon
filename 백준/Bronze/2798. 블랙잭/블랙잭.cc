#include<iostream>
using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	int arr[103] = { 0, };

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int sum = 0;
	int ans = 0;

	for (int i = 0; i < n-2; i++)
	{
		
		for (int j = i+1; j < n-1; j++)
		{
			
			for (int k = j+1; k < n; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum <= m && sum >= ans) ans = sum;
				sum = 0;
			}
		}
	}

	cout << ans;

	return 0;
}