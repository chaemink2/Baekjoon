#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<int> s;
vector<char> ans;

int cur_num;


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	s.push(cur_num);
	cur_num++;

	
	int flag = 0;
	int n; cin >> n;


	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		
		while (s.top() < num) {
			s.push(cur_num);
			cur_num++;
			ans.push_back('+');
		}
		if (s.top() == num) {
			s.pop();
			ans.push_back('-');
		}
		else {
			flag = 1;
		}
	}

	if (flag == 1) {
		cout << "NO" << '\n';
	}
	else {
		for (int i = 0; i < ans.size(); i++)
		{
			cout << ans[i] << "\n";
		}
	}

	return 0;
}