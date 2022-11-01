#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, V; cin >> A >> B >> V;
	int ans = 0;

	V = V - A;
	A = A - B;

	if (V % A != 0) ans = (V / A) + 2;
	else ans = (V / A) + 1;

	cout << ans;

	return 0;
}