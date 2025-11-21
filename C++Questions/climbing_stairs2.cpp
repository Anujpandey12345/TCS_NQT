// DP = Recursion + Memoization
// tc - O(N)
//sc - O(N)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(int cost[], int n) {
    vector<int>dp(n+1);
    dp[0] = cost[0];
    dp[1] = cost[1];
    for(int i = 2; i < n; i++) {
        dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
    }
    return min(dp[n-1], dp[n-2]);
}
int main() {
    int cost[3] = {10, 15, 20};
    int n = sizeof(cost) / sizeof(cost[0]);
    cout << solve(cost, n) << endl;
}