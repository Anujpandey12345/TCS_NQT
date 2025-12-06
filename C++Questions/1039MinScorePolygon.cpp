// 1039 ->? minimum-score-triangulation-of-polygon ->>>>>>.... Recursion Solution
// #include <bits/stdc++.h>
// using namespace std;
// int solve(vector<int>& v, int i, int j) {
//     //Base Condition .......
//     if (i + 1 == j) {
//         return 0;
//     }
//     int ans = INT_MAX;
//     for(int k = i + 1; k < j; k++) {
//         ans = min(ans, v[i]*v[j]*v[k] + solve(v, i, k) + solve(v, k, j));
//     }
//     return ans;
// }
// int main() {
//     vector<int> values = {1,3,1,4,1,5};
//     int n = values.size();
//     int ans = solve(values, 0, n-1);
//     cout << ans << endl;
//     return 0;
// }









// // 1039 ->? minimum-score-triangulation-of-polygon ->>>>>>.... Recursion Solution + Memoization
// #include <bits/stdc++.h>
// using namespace std;
// int solve(vector<int>& v, int i, int j, vector<vector<int>>&dp) {
//     //Base Condition .......
//     if (i + 1 == j) {
//         return 0;
//     }
//     if(dp[i][j] != -1){
//         return dp[i][j];
//     }
//     int ans = INT_MAX;
//     for(int k = i + 1; k < j; k++) {
//         ans = min(ans, v[i]*v[j]*v[k] + solve(v, i, k, dp) + solve(v, k, j, dp));
//     }
//     dp[i][j] =  ans;
//     return dp[i][j];
// }
// int main() {
//     vector<int> values = {1,3,1,4,1,5};
//     int n = values.size();
//     vector<vector<int>> dp(n, vector<int>(n, -1));
//     int ans = solve(values, 0, n-1, dp);
//     cout << ans << endl;
//     return 0;
// }



















// Tabulation Mathod (bottom Up)
#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>& v) {
    int n = v.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    

    for(int i = n-1; i>=0; i--){
        for(int j = i+2; j<n; j++) {
            int ans = INT_MAX;
            for(int k = i + 1; k < j; k++) {
                ans = min(ans, v[i]*v[j]*v[k] + dp[i][k] + dp[k][j]);
            }
            dp[i][j] =  ans;
        }
    }
    return dp[0][n-1];  
}
int main() {
    vector<int> values = {1,3,1,4,1,5};
    int ans = solve(values);
    cout << ans << endl;
    return 0;
}