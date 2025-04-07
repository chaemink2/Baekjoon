#include <iostream>
#include <string>
using namespace std;

string grade[10] = {"A+","A0","B+","B0","C+","C0","D+","D0","F","P"};
float grade_num[10] = { 4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0, 0.0 };

float calc(float point, string s)
{
	for (int i = 0; i < 10; i++)
	{
		if (s == grade[i])
		{
			return point * grade_num[i];
		}
	}
	return 0;
}

float solution()
{
	string str;
	float point = 0;
	float ans = 0;
	int cnt = 0;

	for (int i = 0; i < 20; i++)
	{
		cin >> str >> point >> str;

		if (str == grade[9])
		{
			continue;
		}

		cnt += point;
		ans += calc(point, str);
	}

	return ans / cnt;
}

int main()
{
	cout << solution();

	return 0;
}