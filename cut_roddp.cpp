// 107: Cut Rod into Segments of X, Y, Z || DP Series || 
//Recursion + Memoization = Top Down Approach

#include <bits/stdc++.h>
using namespace std;
int solve(int n, int x, int y, int z, vector<int>&dp) {
    if(n == 0) return 0; // Base Case..
    if(n < 0) return INT_MIN;
    if(dp[n] != -1) return dp[n];
    int a = solve(n-x, x, y, z, dp) + 1;
    int b = solve(n-y, x, y, z, dp) + 1;
    int c = solve(n-z, x, y, z, dp) + 1;
    dp[n] = max(a, max(b, c));
    return dp[n];
}
int main() {
    int n, x, y, z;
    cout << "Enter the Rod Number :- ";
    cin >> n;
    cout << "Now enter the X, Y, Z :- ";
    cin >> x >> y >> z;
    vector<int>dp(n+1, -1);
    int ans = solve(n, x, y, z, dp);
    if(ans < 0) {
        cout << 0 << endl;
    }else{
        cout << ans  << endl;
    }
    return 0;
}