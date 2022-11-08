#include <iostream>

using namespace std;

struct cnt
{
    int zero, one;
};

cnt dp[41];

//구조체로 묶어서 쌍으로 카운트?

void initial(void)
{
    for (int i = 0; i < 41; i++)
    {
        dp[i].zero = 0;
        dp[i].one = 0;
    }
}

void solution(int num)
{
    // int cnt_zero = 0, cnt_one = 0;

    dp[0].zero = 1; dp[0].one = 0;
    dp[1].zero = 0; dp[1].one = 1;

    for (int i = 2; i <= num; i++)
    {
        // dp[i] = dp[i - 1] + dp[i - 2];
        dp[i].zero = dp[i - 1].zero + dp[i - 2].zero;
        dp[i].one = dp[i - 1].one + dp[i - 2].one;
    }

    cout << dp[num].zero << " " << dp[num].one << "\n";
}

int main(void)
{
    int test_case; cin >> test_case;

    for (int tc = 1; tc <= test_case; tc++)
    {
        initial();
        int num; cin >> num;
        solution(num);
    }

    return 0;
}