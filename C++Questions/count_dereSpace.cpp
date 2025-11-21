// 108: Count derangements || DP Series -- > Space OptiMization...
// TC-O(N)
// SC-O(1)
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long int solve(int n) {
    //Base Condition's
    vector<long long int>dp(n+1, 0);
    long long int prev2 = 0;
    long long int prev1 = 1;
    for(int i = 3; i <= n; i++) {
        long long int first = prev1%MOD;
        long long int second = prev2%MOD;
        long long int sum = (first+second)%MOD;
        long long int ans = ((i-1)*sum)%MOD;
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
int main() {
    int n;
    cout << "Enter the Number :: ";
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}