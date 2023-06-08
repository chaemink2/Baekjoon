#include<iostream>
using namespace std;

int num;

void input()
{
	cin >> num;
}

void solution()
{
	while (num > 0)
	{
		for (int i = 0; i < num; i++)
		{
			cout << "*";
		}
		cout << "\n";
		num--;
	}
}

int main()
{
	input();
	solution();

	return 0;
}