#include<iostream>

using namespace std;

struct BMI
{
	int weight, height;
	int cnt;
};

BMI arr[51];

int test_case;

void input(void)
{
	cin >> test_case;

	for (int tc = 0; tc < test_case; tc++)
	{
		cin >> arr[tc].weight >> arr[tc].height;
	}
}

void solution(void)
{
	for (int i = 0; i < test_case; i++)
	{
		arr[i].cnt = test_case;

		for (int j = 0; j < test_case; j++)
		{
			if (i == j) continue;

			if (arr[i].weight >= arr[j].weight || arr[i].height >= arr[j].height)
			{
				arr[i].cnt--;
			}
		}
	}

	for (int i = 0; i < test_case; i++)
	{
		cout << arr[i].cnt << " ";
	}
}

int main(void)
{
	input();
	solution();

	return 0;
}