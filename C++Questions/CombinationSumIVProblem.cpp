// Combination Sum IV Problem || DP Series -> Recursive Solution 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int>&arr, int tar) {
    //Base Case..
    if(tar < 0) return 0;
    if(tar == 0) return 1;
    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        ans += solve(arr, tar-arr[i]);
    }
    return ans;
}
int main () {
    vector<int> arr = {1, 2};
    int target = 3;
    int ans = solve(arr, target);
    cout << ans << endl;
}
