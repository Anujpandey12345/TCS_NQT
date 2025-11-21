//  109: Painting Fence Algorithm || DP Series - >> Recursive Solution + Memoization
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int add(int a, int b) {
    return ((a%MOD)+(b%MOD))%MOD;
}
int mul(int a, int b) {
    return ((a%MOD)*(b%MOD))%MOD;
}
int solve (int n, int k, vector<int>&dp) {
    if(n == 1) return k;
    if(n == 2) return add(k, mul(k, k-1));
    if(dp[n] != -1) return dp[n];
    dp[n] = add(mul(solve(n-2, k, dp), k-1), mul(solve(n-1, k, dp), k-1));
    return dp[n];
}
int main() {
    int n, k;
    cout << "Enter the N & K :- ";
    cin >> n >> k;
    vector<int>dp(n+1, -1);
    cout << solve(n, k, dp) << endl;
    return 0;
}