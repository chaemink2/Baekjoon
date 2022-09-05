#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str; cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'X' && str[i+1] == 'X')
		{
			str[i] = 'B';
			str[i+1] = 'B';
		}
	}
	int flag = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == 'X')
		{
			flag = 1;
			break;
		}
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'B' && str[i + 1] == 'B' && str[i + 2] == 'B' && str[i + 3] == 'B')
		{
			str[i] = 'A';
			str[i + 1] = 'A';
			str[i + 2] = 'A';
			str[i + 3] = 'A';
		}
	}

	if (flag == 1)
	{
		cout << -1;
	}
	else
	{
		for (int i = 0; i < str.length(); i++)
		{
			cout << str[i];
		}
	}
	return 0;
}