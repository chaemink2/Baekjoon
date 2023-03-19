#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int cnt = 0;

	// n <= 1000
	if (n == 1000)
	{
		cout << 144;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{

			if (i >= 100)
			{
				int a = i / 100;
				
				int b = (i - (100*a)) / 10;
				
				int c = (i - (100*a) - (10*b));

				if (c - b == b - a) cnt++;
			}
			else
			{
				cnt++;
			}
		}

		cout << cnt;
	}

	return 0;
}