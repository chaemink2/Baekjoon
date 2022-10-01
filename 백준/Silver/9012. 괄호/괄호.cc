#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	int N; cin >> N;
	for (int tc = 1; tc <= N; tc++)
	{
		string str; cin >> str;
		stack<char> s;
		string answer = "YES";

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(')
			{
				s.push(str[i]);
			}
			else if (!s.empty() && str[i] == ')')
			{
				s.pop();
			}
			else
			{
				answer = "NO";
				break;
			}
		}
		if (!s.empty()) answer = "NO";

		cout << answer << endl;
	}
	return 0;
}