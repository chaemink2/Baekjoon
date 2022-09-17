#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a, b, c; cin >> a >> b >> c;
	int num = a * b * c;
	string str = to_string(num);
	for (char i = '0'; i <= '9'; i++)
	{
		int cnt = 0;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == i) cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}