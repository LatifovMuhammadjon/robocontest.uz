#include <iostream>
int dp[1001][1001];
const int MOD = 1e9+7;
int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    dp[0][0] = 1;
    for (int n = 1; n <= 1000; n++)
    {
        dp[n][0] = 1;
        for (int k = 1; k <= 1000; k++)
            dp[n][k] = (dp[n-1][k] + dp[n][k-1]) % MOD;
    }
    int t, n, k;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n >> k;
        std::cout << dp[n][k] << '\n';
    }
    return 0;
}
