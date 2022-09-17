#include<iostream>
using namespace std;

int main()
{
	int scr; cin >> scr;
	if (scr >= 90) cout << "A";
	else if (scr >= 80) cout << "B";
	else if (scr >= 70) cout << "C";
	else if (scr >= 60) cout << "D";
	else cout << "F";
	return 0;
}