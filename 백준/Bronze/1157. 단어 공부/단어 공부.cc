#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string str; cin >> str;
	int arr[125] = { 0, };
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i]>='a' && str[i]<='z')
		{
			str[i] = toupper(str[i]);
		}
	}
	for (int i = 0; i < str.length(); i++)
	{
		arr[str[i] - 'A'] += 1;
	}
	int max = 0;
	char ans;
	for (int i = 0; i < 124; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			ans = i + 'A';
		}
	}
	int cnt = 0;
	for (int i = 0; i < 124; i++)
	{
		if (arr[i] == max) cnt++;
	}
	if (cnt > 1)
	{
		cout << "?";
	}
	else
	{
		cout << ans;
	}
	return 0;
}