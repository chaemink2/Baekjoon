#include<iostream>
using namespace std;

int main()
{
	bool arr[100001] = { false, };
	for (int i = 1; i <= 10000; i++)
	{
		if (i < 10)
		{
			arr[i + i] = true;
		}
		else if (i < 100)
		{
			int a = i / 10;
			int b = i - a * 10;
			arr[i + a + b] = true;
		}
		else if (i < 1000)
		{
			int a = i / 100;
			int b = (i - 100 * a) / 10;
			int c = i - 100 * a - 10 * b;
			arr[i + a + b + c] = true;
		}
		else if (i < 10000)
		{
			int a = i / 1000;
			int b = (i - 1000 * a) / 100;
			int c = (i - 1000 * a - 100 * b) / 10;
			int d = i - 1000 * a - 100 * b - 10 * c;
			arr[i + a + b + c + d] = true;
		}
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (arr[i] == false) cout << i << '\n';
	}

	return 0;
}