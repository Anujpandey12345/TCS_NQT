// DP = Recursion + Memoization
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(int cost[], int n, vector<int>&dp) {
    if(n == 1) return cost[1];
    if(n == 0) return cost[0];
    // Step - 3
    if(dp[n] != -1) return dp[n];
    // Step - 2
    dp[n] =  cost[n] + min(solve(cost, n-1, dp), solve(cost, n-2, dp));
    return dp[n];
}
int main() {
    int cost[3] = {10, 15, 20};
    int n = sizeof(cost) / sizeof(cost[0]);
    //Step 1
    vector<int>dp(n+1, -1);
    int ans = min(solve(cost, n-1, dp), solve(cost, n-2, dp));
    cout << ans << endl;
    return 0;
}