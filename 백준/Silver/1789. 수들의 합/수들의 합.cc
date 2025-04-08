#include<iostream>
using namespace std;

long long solution(long long arg)
{
	long long n = 1;
	long long ans = 0;
	while (arg)
	{
		if (n > arg) return ans;
		else
		{
			arg -= n;
			n++;
			ans++;
		}
	}

	return ans;
}

int main()
{
	long long input = 0, output = 0;
	cin >> input;
	output = solution(input);
	cout << output;

	return 0;
}