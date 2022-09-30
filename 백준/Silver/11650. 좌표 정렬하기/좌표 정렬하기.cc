#include<iostream>
#include<algorithm>
using namespace std;

struct Node
{
	int x, y;
};

Node arr[100001];

bool compare(Node a, Node b)
{
	if (a.x > b.x) return false;
	if (a.x < b.x) return true;

	if (a.y > b.y) return false;
	if (a.y < b.y) return true;

	return false;
}

int main()
{
	int N; cin >> N;
	for (int i = 0; i < N; i++)
	{
		int x, y; cin >> x >> y;
		arr[i].x = x;
		arr[i].y = y;
	}
	sort(arr, arr + N, compare);
	for (int i = 0; i < N; i++)
	{
		cout << arr[i].x << " " << arr[i].y << '\n';
	}
	return 0;
}