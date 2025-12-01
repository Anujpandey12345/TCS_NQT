// Dp - > Recursion + Memoization ( 0/1 KnapSack Problem || learn 2-D DP)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int>&wet, vector<int>&val, int index, int W, vector<vector<int>>&dp){
    //Base Condition
    if(index == 0) {
        if(wet[0] <= W){
            return val[0];
        }else{
            return 0;
        }
    }
    //Step - 3 check the -1
    if(dp[index][W] != -1) return dp[index][W];
    int include = 0;
    if(wet[index] <= W){
        include = val[index] + solve(wet, val, index-1, W - wet[index], dp);
    }
    int exclude = 0 + solve(wet, val, index-1, W, dp);
    //Step - 2 We can see Index, W Chnage the state means chnage there values index-1, W - wet[index];
    dp[index][W] = max(exclude, include);
    return dp[index][W];

}
int main () {
    vector<int> wet  = {4, 5, 1};
    vector<int> val = {1, 2, 3};
    int MaxWeight = 4;
    int n = wet.size();
    //Step - 1
    vector<vector<int>>dp(n, vector<int>(MaxWeight+1, -1));
    int ans = solve(wet, val, n-1, MaxWeight, dp);
    cout << ans << endl;

    
}
