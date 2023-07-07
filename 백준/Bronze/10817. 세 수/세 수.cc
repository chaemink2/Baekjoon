#include<iostream>
#include<algorithm>
using namespace std;

int arr[3];

void input()
{
	for (int i = 0; i < 3; i++) cin >> arr[i];
}

void solution()
{
	sort(arr, arr + 3);
	cout << arr[1];
}

int main()
{
	input();
	solution();
}