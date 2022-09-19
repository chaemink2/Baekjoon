#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str;
	while (cin >> str && str != "0")
	{
		string buf = str;
		reverse(str.begin(), str.end());
		if (str == buf) cout << "yes\n";
		else if (str != buf) cout << "no\n";
	}
	return 0;
}