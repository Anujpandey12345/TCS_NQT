// Maximum sum of Non- Adjacent Elements, Recursive + Memoization..
// TC = O(N)
// SC = O(N)+O(N)
#include <bits/stdc++.h> 
#include<algorithm>
using namespace std;
int solve(int arr[], int n, vector<int> &dp) {
    if(n < 0) return 0;
    if(n == 0) return arr[0];
    //Step - 3
    if(dp[n] != -1) return dp[n];
    int include = solve(arr, n-2, dp) + arr[n];
    int exclude = solve(arr, n-1, dp) + 0;
    // step - 2
    dp[n] = max(include, exclude); 
    return dp[n];
}
int main() {
    int arr[4] = {9, 9, 8, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    //Step 1
    vector<int>dp(n, -1);
    int ans = solve(arr, n-1, dp);
    cout << ans << endl;
}