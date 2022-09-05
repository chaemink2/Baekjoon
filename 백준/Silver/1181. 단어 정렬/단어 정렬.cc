#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<string> words[52];
	string str;
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		words[str.length()].push_back(str);
	}
	for (int i = 0; i < 51; i++)
	{
		sort(words[i].begin(), words[i].end());
		words[i].erase(unique(words[i].begin(), words[i].end()), words[i].end());

		for (int j = 0; j < words[i].size(); j++)
		{
			cout << words[i][j] << '\n';
		}
	}
	return 0;
}