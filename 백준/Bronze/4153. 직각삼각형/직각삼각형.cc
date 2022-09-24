#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	while (1)
	{
		int arr[3] = { 0, };
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + 3);
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) break;

		int v = arr[0] * arr[0] + arr[1] * arr[1];
		int t = arr[2] * arr[2];

		if (v == t)
		{
			cout << "right" << '\n';
		}
		else
		{
			cout << "wrong" << '\n';
		}
	}
	return 0;
}