#include<iostream>
#include<queue>
#include<string>

using namespace std;

int cmdNum;
queue<int> q;

int main(void)
{
	cin >> cmdNum;
	for (int tc = 1; tc <= cmdNum; tc++)
	{
		string cmd; cin >> cmd;
		
		if (cmd == "push") // push
		{
			int num; cin >> num;
			q.push(num);
			//q.pop();
		}
		else if (cmd == "pop") // pop
		{
			if (!q.empty()) {
				cout << q.front() << "\n";
				q.pop();
			}
			else cout << -1 << "\n";
		}
		else if (cmd == "size") // size
		{
			cout << q.size() << "\n";
		}
		else if (cmd == "empty") // empty
		{
			if (q.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (cmd == "front") // front
		{
			if (!q.empty()) cout << q.front() << "\n";
			else cout << -1 << "\n";
		}
		else if (cmd == "back") // back
		{
			if (!q.empty()) cout << q.back() << "\n";
			else cout << -1 << "\n";
		}
	}

	return 0;
}