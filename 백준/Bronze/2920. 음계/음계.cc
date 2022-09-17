#include<iostream>
using namespace std;

int main()
{
	int flag1 = 0, flag2 = 0;
	for (int i = 1, j = 8; i < 9, j > 0; i++, j--)
	{
		int num; cin >> num;
		if (num != i) flag1 = 1;
		if (num != j) flag2 = 1;
	}
	if (flag1 == 0 && flag2 == 1)
	{
		cout << "ascending";
	}
	else if (flag1 == 1 && flag2 == 0)
	{
		cout << "descending";
	}
	else
	{
		cout << "mixed";
	}
	return 0;
}