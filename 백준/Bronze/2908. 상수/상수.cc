#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a, b; cin >> a >> b;
	string str1 = to_string(a);
	string str2 = to_string(b);
	char temp;
	temp = str1[0];
	str1[0] = str1[2];
	str1[2] = temp;
	temp = str2[0];
	str2[0] = str2[2];
	str2[2] = temp;
	a = stoi(str1);
	b = stoi(str2);
	cout << max(a, b);
	return 0;
}