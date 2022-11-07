#include<iostream>
#include<stack>

using namespace std;

stack<int> s;

void input(void)
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num; cin >> num;
		
		if (num != 0) s.push(num);
		else if (num == 0) s.pop();
	}
}

void solution(void)
{
	long long ans = 0;
	while (!s.empty())
	{
		ans += s.top();
		s.pop();
	}
	cout << ans;
}

int main(void)
{
	input();
	solution();
	
	return 0;
}