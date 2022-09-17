#include<iostream>
using namespace std;

int main()
{
	int Year, flag = 0; cin >> Year;
	if (Year % 4 == 0 && Year % 100 != 0)
	{
		flag = 1;
	}
	else if (Year % 400 == 0)
	{
		flag = 1;
	}
	cout << flag;
	return 0;
}