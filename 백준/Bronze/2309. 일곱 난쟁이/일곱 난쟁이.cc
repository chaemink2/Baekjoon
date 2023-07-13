#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[10] = { 0, };
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr, arr + 9);

	int fake1 = 0;
	int fake2 = 0;
	bool check = false;

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - arr[i] - arr[j] == 100)
			{
				fake1 = i;
				fake2 = j;
				check = true;
				break;
			}
		}
		if (check == true) break;
	}

	if (check == true)
	{
		for (int i = 0; i < 9; i++)
		{
			if (i == fake1 || i == fake2) continue;
			cout << arr[i] << '\n';
		}
	}

	return 0;
}