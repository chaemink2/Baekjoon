#include<iostream>
#include<queue>

using namespace std;

priority_queue<int> pq;
queue<pair<int, int> >q;

int idx;

void input(void)
{
	while (!pq.empty())
	{
		pq.pop();
	}
	while (!q.empty())
	{
		q.pop();
	}
	int n; cin >> n >> idx;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		q.push({ num, i });
		pq.push(num);
	}
}

void solution(void)
{
	int ans = 0;
	while (!q.empty())
	{
		if (q.front().first < pq.top())
		{
			q.push(q.front());
			q.pop();
		}
		else
		{
			if (q.front().second == idx)
			{
				cout << ans + 1 << '\n';
				break;
			}
			else
			{
				q.pop();
				pq.pop();
				ans++;
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case; cin >> test_case;
	for (int tc = 1; tc <= test_case; tc++)
	{
		input();
		solution();
	}
	return 0;
}