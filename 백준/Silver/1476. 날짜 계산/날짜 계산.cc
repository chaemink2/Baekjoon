#include<iostream>
using namespace std;

int main()
{
	int Earth, Sun, Moon; cin >> Earth >> Sun >> Moon;
	if (Earth == 15) Earth = 0;
	if (Sun == 28) Sun = 0;
	if (Moon == 19) Moon = 0;
	for (int i = 1; i < 10000; i++)
	{
		if (i % 15 == Earth && i % 28 == Sun && i % 19 == Moon)
		{
			cout << i;
			break;
		}
	}
	return 0;
}