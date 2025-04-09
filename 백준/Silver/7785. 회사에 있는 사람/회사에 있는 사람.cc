#include <iostream>
#include <map>
using namespace std;


int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	string name;
	string s;
	map<string, string, greater<string>> serin;

	for (int i = 0; i < n; i++)
	{
		cin >> name >> s;
		serin[name] = s;
	}

	
	for (auto it = serin.begin(); it != serin.end(); it++)
	{
		if (it->second == "enter") cout << it->first << "\n";
	}
	
	return 0;
}