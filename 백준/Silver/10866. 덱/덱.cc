#include<iostream>
#include<deque>
#include<string>

using namespace std;

deque<int> dq;
int cmdNum;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> cmdNum;
	for (int tc = 1; tc <= cmdNum; tc++)
	{
		string cmd; cin >> cmd;

		if (cmd == "push_front")
		{
			int num; cin >> num;
			dq.push_front(num);
		}
		else if (cmd == "push_back")
		{
			int num; cin >> num;
			dq.push_back(num);
		}
		else if (cmd == "pop_front")
		{
			if (!dq.empty()) {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else cout << -1 << "\n";
		}
		else if (cmd == "pop_back")
		{
			if (!dq.empty()) {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else cout << -1 << "\n";
		}
		else if (cmd == "size")
		{
			cout << dq.size() << "\n";
		}
		else if (cmd == "empty")
		{
			cout << dq.empty() << "\n";
		}
		else if (cmd == "front")
		{
			if (!dq.empty()) {
				cout << dq.front() << "\n";
			}
			else cout << -1 << "\n";
		}
		else if (cmd == "back")
		{
			if (!dq.empty()) {
				cout << dq.back() << "\n";
			}
			else cout << -1 << "\n";
		}
	}
	
	return 0;
}