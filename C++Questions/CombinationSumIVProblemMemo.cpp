// Combination Sum IV Problem || DP Series -> Recursive Solution + Memoization(Top Down)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int>&arr, int tar, vector<int>&dp) {
    //Base Case..
    int n = arr.size();
    if(tar < 0) return 0;
    if(tar == 0) return 1;
    if(dp[tar] != -1) return dp[tar];
    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        ans += solve(arr, tar-arr[i], dp);
    }
    dp[tar] = ans;
    return dp[tar];
}
int main () {
    vector<int> arr = {1, 2};
    int target = 3;
    vector<int>dp(target+1, -1);
    int ans = solve(arr, target, dp);
    cout << ans << endl;
}
