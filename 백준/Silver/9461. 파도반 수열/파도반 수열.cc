#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long dp[101] = { 0 }; // long long을 써야 overflow 방지
    dp[1] = dp[2] = dp[3] = 1;
    for (int i = 4; i <= 100; ++i)
    {
        dp[i] = dp[i - 2] + dp[i - 3];
    }

    int tc, n;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        cout << dp[n] << "\n";
    }

    return 0;
}
