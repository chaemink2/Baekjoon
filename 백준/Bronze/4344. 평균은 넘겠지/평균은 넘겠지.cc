#include<iostream>
using namespace std;


int main()
{
	int test_case = 0;
	cin >> test_case;

	for (int tc = 0; tc < test_case; tc++)
	{
		int arr[1001] = { 0, };
		int student_number = 0;
		cin >> student_number;
		int avg = 0;

		for (int sn = 0; sn < student_number; sn++)
		{
			cin >> arr[sn];
			avg += arr[sn];
		}

		avg /= student_number;
		int cnt = 0;

		for (int i = 0; i < student_number; i++)
		{
			if (arr[i] > avg) cnt++;
		}

		float ans = float(cnt) / float(student_number) * 100.0;

		cout << fixed;
		cout.precision(3);
		cout << ans << "%" << '\n';

	}

	return 0;
}