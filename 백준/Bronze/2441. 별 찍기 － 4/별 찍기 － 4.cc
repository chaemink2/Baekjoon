#include<iostream>
using namespace std;

int number;

void input()
{
	cin >> number;
}

void solution()
{
	int temp = 0;
	while (number > 0)
	{
		for (int i = 0; i < temp; i++) cout << " ";
		for (int i = 0; i < number; i++) cout << "*";

		cout << '\n';
		number--;
		temp++;
	}
}

int main()
{
	input();
	solution();
}