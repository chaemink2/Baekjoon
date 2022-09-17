#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		int num, flag = 0; cin >> num;
		for (int j = 0; j < v.size(); j++)
		{
			if (v[j] == num % 42) flag = 1;
		}
		if (flag == 0) v.push_back(num % 42);
	}
	cout << v.size();
	return 0;
}