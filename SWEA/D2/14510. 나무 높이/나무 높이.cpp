#include<iostream>
#include<vector>
using namespace std;

vector<int> trees;
vector<int> diff;
int N, max_height;

void input()
{
	cin >> N;
	max_height = 0;
	for (int i = 0; i < N; i++)
	{
		int tree; cin >> tree;
		trees.push_back(tree);
		max_height = max(max_height, tree);
	}
	for (int i = 0; i < N; i++)
	{
		int num = max_height - trees[i];
		diff.push_back(num);
	}
}

int solution()
{
	int one_cnt = 0, two_cnt = 0;

	for (int i = 0; i < diff.size(); i++)
	{
		one_cnt += diff[i] % 2;
		two_cnt += diff[i] / 2;
	}

	if (one_cnt != 0 && two_cnt == 0) return one_cnt * 2 - 1;
	else if (one_cnt == two_cnt) return one_cnt + two_cnt;
	else if (one_cnt < two_cnt)
	{
		while (one_cnt < two_cnt - 1)
		{
			if (two_cnt - 2 == one_cnt)
			{
				return (one_cnt + 2) * 2 - 1;
			}
			one_cnt += 2;
			two_cnt -= 1;
		}
		return two_cnt * 2;
	}
	else if (one_cnt > two_cnt) return one_cnt * 2 - 1;
}

int main()
{
	int test_case; cin >> test_case;
	for (int tc = 1; tc <= test_case; tc++)
	{
		trees.clear();
		diff.clear();

		input();
		int ans = solution();

		cout << "#" << tc << " " << ans << "\n";
	}

	return 0;
}