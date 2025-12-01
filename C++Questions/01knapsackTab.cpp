// Dp - > Tabulasion (Bottom method ) ( 0/1 KnapSack Problem || learn 2-D DP)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<int>&wet, vector<int>&val, int n, int W){
    //Step -1 
    vector<vector<int>>dp(n, vector<int>(W+1, -1));
    //Step -2 Analyse Base Case
    for(int w = wet[0]; w <= W; w++) {
        if(wet[0] <= W){
            dp[0][w] = val[0];
        }else{
            dp[0][w] = 0;
        }
    }

    for(int index = 1; index < n; index++) {
        for(int w = 0; w <= W; w++){
            int include = 0;
            if(wet[index] <= w){
                include = val[index] + dp[index-1] [w - wet[index]];
            }
            int exclude = 0 + dp[index-1][w];
            dp[index][w] = max(exclude, include);
        }
    }
    return dp[n-1][W];

}
int main () {
    vector<int> wet  = {4, 5, 1};
    vector<int> val = {1, 2, 3};
    int MaxWeight = 4;
    int n = wet.size();
    int ans = solve(wet, val, n, MaxWeight);
    cout << ans << endl;

    
}
