// Recursion + Memoizations
// TC - X * N
// SC - O(X)
#include <iostream>
#include <algorithm>
#include <climits> 
#include <vector>
#include <array>

using namespace std;
int SolveRec(int coin[], int n, int x, vector<int> &dp){
    if(x == 0) return 0;
    if(x < 0) return INT_MAX;
    if(dp[x] != -1) return dp[x];
    int mini = INT_MAX;
    for(int i =0; i < n; i++) {
        int ans = SolveRec(coin, n, x - coin[i], dp);
        if(ans != INT_MAX){
            mini = min(mini, 1+ans);
        }
    }
    dp[x] = mini;
    return mini;
}
int main() {
    int coin[5] = {1, 2, 5, 10, 1};
    int n = sizeof(coin)/sizeof(coin[0]);
    int x = 11;
    vector<int> dp(x+1, -1);
    int ans = SolveRec(coin, n, x, dp);
    if(ans == INT_MAX) cout << -1 << endl;
    cout <<  ans << endl;

}
 