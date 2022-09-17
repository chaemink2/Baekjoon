#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str; cin >> str;
	int arr[26] = { 0, };
	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (arr[str[i] - 'a'] == -1)
		{
			arr[str[i] - 'a'] = i;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}