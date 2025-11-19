// Tabulation method --
// TC - X * N
// SC - O(X)
#include <iostream>
#include <algorithm>
#include <climits> 
#include <vector>
#include <array>
using namespace std;
int SolveRec(int coin[], int n, int x){
    vector<int> dp(x+1, INT_MAX);
    dp[0] = 0;
    for(int i =0; i <= x; i++) {
        for(int j = 0; j < n; j++) {
            if(i-coin[j] >= 0 && dp[i-coin[j]] != INT_MAX){
                dp[i] = min(dp[i], 1 + dp[i-coin[j]]);
            }
        }
    }
    if(dp[x] == INT_MAX) return -1;
    return dp[x];
}
int main() {
    int coin[5] = {1, 2, 5, 10, 1};
    int n = sizeof(coin)/sizeof(coin[0]);
    int x = 11;
    cout << SolveRec(coin, n, x) << endl;

}
 