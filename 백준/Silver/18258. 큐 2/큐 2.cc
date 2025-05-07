#include <iostream>
#include <string>
#include <queue>
using namespace std;

queue<int> q;
int n;
string output;  // 출력 누적용

void check(string str)
{
	if (str == "push")
	{
		int tmp = 0; cin >> tmp;
		q.push(tmp);
	}
	else if (str == "pop")
	{
		if (q.size())
		{
			output += to_string(q.front()) + '\n';
			q.pop();
		}
		else output += "-1\n";
	}
	else if (str == "size")
	{
		output += to_string(q.size()) + '\n';
	}
	else if (str == "empty")
	{
		output += (q.size() ? "0\n" : "1\n");
	}
	else if (str == "front")
	{
		output += (q.size() ? to_string(q.front()) + '\n' : "-1\n");
	}
	else if (str == "back")
	{
		output += (q.size() ? to_string(q.back()) + '\n' : "-1\n");
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	string str;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		check(str);
	}

	cout << output;  // 마지막에 한 번에 출력

	return 0;
}
