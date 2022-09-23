#include<iostream>
using namespace std;

int main()
{
	int N; cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		int num, flag = 0;
		cin >> num;
		for (int j = 2; j < 1001; j++)
		{
			if (num == j) continue;
			if (num % j == 0) flag += 1;
		}
		if (flag == 0 && num != 1) cnt++;
	}
	cout << cnt;

	return 0;
}