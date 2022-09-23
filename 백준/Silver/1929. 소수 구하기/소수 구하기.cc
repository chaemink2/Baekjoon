#include<iostream>
using namespace std;

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	bool* PrimeArr = new bool[b+1];

	for (int i = 2; i < b+1; i++)
	{
		PrimeArr[i] = true;
	}

	for (int i = 2; i * i <= b; i++)
	{
		if (PrimeArr[i]) 
		{
			for (int j = i * i; j <= b; j += i)
			{
				PrimeArr[j] = false;
			}
		}
	}

	for (int i = a; i <= b; i++)
	{
		if (PrimeArr[i]) printf("%d\n", i);
	}

	return 0;
}