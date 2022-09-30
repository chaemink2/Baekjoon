#include<iostream>
#include<queue>
using namespace std;

queue<int> q;

int main()
{
	int N, K; cin >> N >> K;

	cout << "<";

	for (int i = 1; i <= N; i++) q.push(i);

	while (!q.empty())
	{
		for (int i = 1; i < K; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		if (q.size() != 1) cout << ", ";
		q.pop();
	}
	
	cout << ">";
	
	return 0;
}