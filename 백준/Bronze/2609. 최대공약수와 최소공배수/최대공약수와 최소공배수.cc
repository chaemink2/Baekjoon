#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int min = 0, max = 0;

	for (int i = 1, j = a * b; i <= a, j >= a; i++, j--)
	{
		if (a % i == 0 && b % i == 0) max = i;
		if (j % a == 0 && j % b == 0) min = j;
	}
	cout << max << '\n' << min;
	return 0;
}