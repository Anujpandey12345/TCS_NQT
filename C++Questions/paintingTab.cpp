//  109: Painting Fence Algorithm || DP Series - >> Tabulation method --
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int add(int a, int b) {
    return ((a%MOD)+(b%MOD))%MOD;
}
int mul(int a, int b) {
    return ((a%MOD)*(b%MOD))%MOD;
}
int solve (int n, int k) {
    vector<int>dp(n+1, 0);
    dp[1] = k;
    dp[2] = add(k, mul(k, k-1));
    for(int i = 3; i <= n; i++) {
        dp[i] = add(mul(dp[i-2], k-1), mul(dp[i-1], k-1));
    }
    return dp[n];
}
int main() {
    int n, k;
    cout << "Enter the N & K :- ";
    cin >> n >> k;
    cout << solve(n, k) << endl;
    return 0;
}