#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

struct Node
{
	int a;
	string b;
};

vector<Node> v;

bool cmp(Node t, Node v)
{
	if (t.a > v.a) return false;
	if (t.a < v.a) return true;

	return false;
}

int main()
{
	int test_case; cin >> test_case;
	for (int tc = 0; tc < test_case; tc++)
	{
		int age; cin >> age;
		string name; cin >> name;
		v.push_back({ age,name });
	}

	stable_sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].a << " " << v[i].b << '\n';
	}
	return 0;
}