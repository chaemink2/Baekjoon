#include<iostream>
#include<algorithm>
using namespace std;

int arr[1000001];

int main()
{
	int N; cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	cout << *min_element(arr, arr + N) << " " << *max_element(arr, arr + N);
	return 0;
}