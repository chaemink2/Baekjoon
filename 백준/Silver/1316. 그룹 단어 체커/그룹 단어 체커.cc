#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int test_case; cin >> test_case;
	int ans = 0;
	for (int tc = 1; tc <= test_case; tc++)
	{
		string str; cin >> str;
		int cnt = 0, cnt2 = 0;
		if (str.size() == 1)
		{
			ans++;
		}
		else
		{
			for (int i = 1; i < str.size(); i++)
			{
				if (str[i] != str[i-1])
				{
					cnt++;
				}
			}
			sort(str.begin(), str.end());
			for (int i = 1; i < str.size(); i++)
			{
				if (str[i] != str[i - 1])
				{
					cnt2++;
				}
			}
			if (cnt == cnt2)
			{
				ans++;
			}
		}
	}
	cout << ans;

	return 0;
}