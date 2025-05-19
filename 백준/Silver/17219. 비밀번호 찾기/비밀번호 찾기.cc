#include <iostream>
#include <string>
#include <map>
using namespace std;

int n = 0, m = 0;
map<string, string> site;

void input()
{
	cin >> n >> m;
	string addr, pwd;

	for (int i = 0; i < n; i++)
	{
		cin >> addr >> pwd;
		site.insert({ addr, pwd });
	}

	return;
}

void solution()
{
	string to_find_site;

	for (int i = 0; i < m; i++)
	{
		cin >> to_find_site;
		cout << site[to_find_site] << "\n";
	}

	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();

	solution();

	return 0;
}