#include<iostream>
//#include<algorithm>

using namespace std;

int n;
int dat[10010];

void input(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num; cin >> num;
		dat[num]++;
	}
}

void solution(void)
{
	//int maxNum = *max_element(dat, dat+10000);

	for (int i = 1; i <= 10000; i++)
	{
		if (dat[i] == 0)continue;

		while (dat[i] > 0)
		{
			dat[i]--;
			cout << i << "\n";
		}
	}
}

int main(void)
{
	input();
	solution();

	return 0;
}