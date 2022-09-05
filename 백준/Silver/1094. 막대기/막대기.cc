#include<iostream>
using namespace std;

int main()
{
	int x; cin >> x;
	int cnt = 0;
	if (x >= 64)
	{
		x = x - 64;
		cnt++;
	}
	if (x >= 32)
	{
		x = x - 32;
		cnt++;
	}
	if (x >= 16)
	{
		x = x - 16;
		cnt++;
	}
	if (x >= 8)
	{
		x = x - 8;
		cnt++;
	}
	if (x >= 4)
	{
		x = x - 4;
		cnt++;
	}
	if (x >= 2)
	{
		x = x - 2;
		cnt++;
	}
	if (x >= 1)
	{
		x = x - 1;
		cnt++;
	}
	if (x == 0)
	{
		cout << cnt;
	}
	return 0;
}