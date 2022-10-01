#include <iostream>
#include <algorithm>
using namespace std;

int arr[500001];
int N, M, card;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) 
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	cin >> M;
	for (int i = 0; i < M; i++) 
	{
		cin >> card;
		cout << upper_bound(arr, arr + N, card) - lower_bound(arr, arr + N, card) << " ";
	}
	return 0;
}
