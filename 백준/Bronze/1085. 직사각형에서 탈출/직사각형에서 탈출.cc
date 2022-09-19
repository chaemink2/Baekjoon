#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int x, y, w, h; cin >> x >> y >> w >> h;
	int a = min((w - x), x);
	int b = min((h - y), y);
	cout << min(a, b);
	return 0;
}