#include<iostream>
#include<algorithm>

using namespace std;

int n;

struct Coord
{
	int x, y;
};

Coord arr[100010];

bool compare(Coord a, Coord b)
{
	if (a.y > b.y) return false;
	if (a.y < b.y) return true;

	if (a.x > b.x) return false;
	if (a.x < b.x) return true;

	return false;
}

void input(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].x >> arr[i].y;
	}
}

void solution(void)
{
	sort(arr, arr + n, compare);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i].x << " " << arr[i].y << '\n';
	}
}

int main(void)
{
	input();
	solution();

	return 0;
}