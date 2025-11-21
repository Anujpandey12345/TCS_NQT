// 108: Count derangements || DP Series -- > Recursion Solution + Memoization
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int solve(int n, vector<int>&dp) {
    //Base Condition's
    if(n == 1) return 0;
    if(n == 2) return 1;
    // Step - 3
    if(dp[n] != -1) return dp[n];
    //Step -> 2
    dp[n] = ( ((n-1)%MOD) * ((solve(n-1, dp)%MOD) + (solve(n-2, dp)%MOD) )%MOD );
    return dp[n];
}
int main() {
    int n;
    cout << "Enter the Number :: ";
    cin >> n;

    //Step - 1
    vector<int>dp(n+1, -1);
    cout << solve(n, dp) << endl;
    return 0;
}