#include<iostream>
using namespace std;

int main()
{
	int number = 0;
	cin >> number;

	int i = 2;

	while (number > 1)
	{
		if (number % i == 0)
		{
			number /= i;
			cout << i << '\n';
		}
		else
		{
			i++;
		}
		if (i > number) break;
	}

	return 0;
}