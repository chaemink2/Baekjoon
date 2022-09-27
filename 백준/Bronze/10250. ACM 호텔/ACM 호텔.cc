#include<iostream>
using namespace std;

int main()
{
	int test_case; cin >> test_case;
	for (int tc = 1; tc <= test_case; tc++)
	{
		int floor, room, customer; cin >> floor >> room >> customer;
		int cnt = 1;
		for (int i = 1; i <= room; i++)
		{
			if (customer > floor)
			{
				customer -= floor;
				cnt++;
			}
			else
			{
				break;
			}
		}

		cout << customer * 100 + cnt << '\n';
	}
	return 0;
}