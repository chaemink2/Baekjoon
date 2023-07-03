#include<iostream>
using namespace std;

int main()
{
	int start_hour, start_minute, cooking_minute;
	cin >> start_hour >> start_minute >> cooking_minute;

	int num = start_hour * 60 + start_minute + cooking_minute;

	if (num >= 1440) {
		num -= 1440;
		cout << num / 60 << " " << num % 60;
	}
	else {
		cout << num / 60 << " " << num % 60;
	}

	return 0;
}