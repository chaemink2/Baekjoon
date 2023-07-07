#include<iostream>
#include<string>
using namespace std;

string str;
int len;

void input()
{
	cin >> str;
	len = str.size();
}

void solution()
{
	for (int i = 0; i < len; i++)
	{
		if (i % 10 == 0)
		{
			for (int j = i; j < i + 10; j++)
			{
				if (j == len) break;
				cout << str[j];
			}
			cout << '\n';
		}
	}
}

int main()
{
	input();
	solution();
}