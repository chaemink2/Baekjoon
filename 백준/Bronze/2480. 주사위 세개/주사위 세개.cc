#include<iostream>
using namespace std;

int a, b, c;

void input()
{
	cin >> a >> b >> c;
}

void solution()
{
	int ans = 0;

	if (a == b && a == c) ans = 10000 + a * 1000;
	else if (a == b) ans = 1000 + a * 100;
	else if (b == c) ans = 1000 + b * 100;
	else if (c == a) ans = 1000 + c * 100;
	else if (a >= b && a >= c) ans = a * 100;
	else if (b >= a && b >= c) ans = b * 100;
	else ans = c * 100;

	cout << ans;
}

int main()
{
	input();
	solution();

	return 0;
}