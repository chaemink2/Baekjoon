#include<iostream>
using namespace std;

int solution(int num)
{
	int sum = num;
	while(num)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main()
{
	int n; cin >> n;
	for(int i=1; i<n; i++)
	{
		int sum = solution(i);
		if (sum == n)
		{
			cout << i;
			return 0;
		}
	}
	cout << 0;
}