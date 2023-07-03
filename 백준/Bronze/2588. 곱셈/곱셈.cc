#include<iostream>
using namespace std;

int main()
{
	int a, b; cin >> a >> b;
	int b1 = b / 100;
	int b2 = (b - (b1 * 100)) / 10;
	int b3 = b - (100 * b1) - (10 * b2);

	cout << a * b3 << '\n' << a * b2 << '\n' << a * b1 << '\n' << a * b;

	return 0;
}