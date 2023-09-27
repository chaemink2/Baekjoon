#include <iostream>
using namespace std;

int main()
{
	int test_case; cin >> test_case;
	for (int tc = 1; tc <= test_case; tc++)
	{
		int a = 0, b = 0; cin >> a >> b;
		int ans = a * b;
		int cnt = 1;

		while (cnt < b)
		{
			if (cnt * a >= b && (cnt * a) % b == 0)
			{
				ans = cnt * a;
				break;
			}
			cnt++;
		}

		cout << ans << '\n';

	}

	return 0;
}