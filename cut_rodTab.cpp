// 107: Cut Rod into Segments of X, Y, Z || DP Series || 
//Tabulation method -> Bottom Up Approach

#include <bits/stdc++.h>
using namespace std;
int solve(int n, int x, int y, int z) {
    vector<int>dp(n+1, INT_MIN);
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        if(i-x >= 0) {
            dp[i] = max(dp[i], dp[i-x] + 1);
        }
        if(i-y >= 0) {
            dp[i] = max(dp[i], dp[i-y] + 1);
        }
        if(i-z >= 0) {
            dp[i] = max(dp[i], dp[i-z] + 1);
        }
    }
    if(dp[n] < 0) return 0;
    else return dp[n];
}
int main() {
    int n, x, y, z;
    cout << "Enter the Rod Number :- ";
    cin >> n;
    cout << "Now enter the X, Y, Z :- ";
    cin >> x >> y >> z;
    int ans = solve(n, x, y, z);
    cout << ans << endl;
}