#include<iostream>
#include<string>
using namespace std;

int main()
{
	int test_case; cin >> test_case;
	for (int tc = 0; tc < test_case; tc++)
	{
		int n; string str; cin >> n >> str;
		for (int j = 0; j < str.length(); j++)
		{
			for (int i = 0; i < n; i++)
			{
				cout << str[j];
			}
		}
		cout << '\n';
	}
	return 0;
}