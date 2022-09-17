#include<iostream>
using namespace std;

int main()
{
	int max = 0, idx = 0;
	for (int i = 1; i < 10; i++)
	{
		int n; cin >> n;
		if (max < n)
		{
			max = n;
			idx = i;
		}
	}
	cout << max << '\n' << idx;
	return 0;
}