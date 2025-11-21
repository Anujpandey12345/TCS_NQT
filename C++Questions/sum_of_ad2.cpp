// Maximum sum of Non- Adjacent Elements, Tabulation method
// TC = O(N)
// SC = O(N)
#include <bits/stdc++.h> 
#include<algorithm>
using namespace std;
int solve(vector<int> &arr) {
    int n = arr.size();
    vector<int>dp(n, 0);
    dp[0] = arr[0];
    for(int i = 1; i < n; i++) {
        int include = dp[i-2]+arr[i];
        int exclude = dp[i-1]+0;
        dp[i] = max(include, exclude);
    }
    return dp[n-1];
}
int main() {
    vector<int> arr = {9, 9, 8, 2};
    int ans = solve(arr);
    cout << ans << endl;
}