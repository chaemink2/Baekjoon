#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(void)
{
	while (1)
	{
		string str;
		getline(cin, str);
		int flag = 0;

		if (str == ".") break;

		stack<char> s;

		for (int i = 0; i < str.length(); i++)
		{
			char ch = str[i];

			if (ch == '[' || ch == '(') s.push(ch);
			else if (ch == ')')
			{
				if (!s.empty() && s.top() == '(') s.pop();
				else
				{
					flag = 1;
					break;
				}
			}
			else if (ch == ']')
			{
				if (!s.empty() && s.top() == '[') s.pop();
				else
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0 && s.empty()) cout << "yes\n";
		else cout << "no\n";
	}
	
	return 0;
}