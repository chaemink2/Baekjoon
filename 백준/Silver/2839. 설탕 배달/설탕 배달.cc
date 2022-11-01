#include<iostream>

using namespace std;

int main(void)
{
	int N, temp1 = 0, temp2 = 0; cin >> N;
	temp1 = (N / 5) + 1; // 몫 + 1
	int flag = 0;
	while (temp2 >= 0)
	{
		temp1--;
		temp2 = N - (temp1 * 5); // 나머지

		if (temp2 % 3 == 0 && temp2 != 0)
		{
			flag = 1;
			break;
		}
		if (temp2 == 0)
		{
			flag = 1;
			break;
		}
		if (temp1 < 0) break;
		if (temp1 == 0 && temp2 % 3 != 0) break;
	}

	if (flag == 1) cout << temp1 + (temp2 / 3);
	else cout << -1;

	return 0;
}