// Combination Sum IV Problem || DP Series -> BottomUp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int>&arr, int tar) {
    //Base Case..
    vector<int>dp(tar+1, 0);
    dp[0] = 1; //Base case if(targ == 0) return 1;
    //Traverse from target too tar
    for(int i = 1; i <= tar; i++) {
        //Traversing on num Vector
        for(int j = 0; j < arr.size(); j++) {
            if(i-arr[j] >= 0){
                dp[i] += dp[i-arr[j]];
            }
        }
    }
    return dp[tar];
}
int main () {
    vector<int> arr = {1, 2};
    int target = 3;
    int ans = solve(arr, target);
    cout << ans << endl;
}
