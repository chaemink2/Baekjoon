#include<iostream>
#include<algorithm>
using namespace std;

long long lan[10001];

int main() {
	int k, n;
	cin >> k >> n;

	for (int i = 0; i < k; i++) {
		cin >> lan[i];
	}

	long long maxValue = *max_element(lan, lan + k);

	long long left = 1;
	long long right = maxValue;
	long long result = 0;
	
	while (left <= right) {
		long long mid = (left + right) / 2;

		long long cnt = 0;
		for (int i = 0; i < k; i++) {
			cnt += lan[i] / mid;
		}
		
		if (cnt >= n) {
			left = mid + 1;
			result = max(result, mid);
		}
		else {
			right = mid - 1;
		}
	}

	cout << result << "\n";
	return 0;
}