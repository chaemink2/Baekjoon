#include<iostream>
using namespace std;

int main()
{
	int test_case; cin >> test_case;
	for (int tc = 0; tc < test_case; tc++)
	{
		int a, b; cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}