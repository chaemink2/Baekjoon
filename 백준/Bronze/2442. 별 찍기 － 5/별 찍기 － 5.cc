#include<iostream>
using namespace std;

int number;

void input()
{
	cin >> number;
}

void solution()
{
	int temp = 1;
	while (number > 0)
	{
		int empty = number - 1; // 4 3
		int star = temp * 2 - 1; // 1 3
		for (int i = 0; i < empty; i++) cout << " ";
		for (int i = 0; i < star; i++) cout << "*";
		//for (int i = 0; i < empty; i++) cout << " ";
		temp++;
		number--;
		cout << '\n';
	}
}

int main()
{
	input();
	solution();
}