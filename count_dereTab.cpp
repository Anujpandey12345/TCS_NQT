// 108: Count derangements || DP Series -- > Tabulation method (Bottom Up Approach)
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long int solve(int n) {
    //Base Condition's
    vector<long long int>dp(n+1, 0);
    dp[1] = 0;
    dp[2] = 1;
    for(int i = 3; i <= n; i++) {
        dp[i] = ( ((i-1)%MOD) * ((solve(i-1)%MOD) + (solve(i-2)%MOD) )%MOD );
        long long int first = dp[i-1]%MOD;
        long long int second = dp[i-2]%MOD;
        long long int sum = (first+second)%MOD;
        long long int ans = ((i-1)*sum)%MOD;
        dp[i] = ans;
    }
    return dp[n];
}
int main() {
    int n;
    cout << "Enter the Number :: ";
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}