// Maximum sum of Non- Adjacent Elements, Space Optimization
// TC = O(N)
// SC = O(N)
#include <bits/stdc++.h> 
#include<algorithm>
using namespace std;
int solve(vector<int> &arr) {
    int n = arr.size();
    int prev2 = 0;
    int prev1 = arr[0];
    for(int i = 1; i < n; i++) {
        int include = prev2+arr[i];
        int exclude = prev1+0;
        int ans = max(include, exclude);
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
int main() {
    vector<int> arr = {9, 9, 8, 2};
    int ans = solve(arr);
    cout << ans << endl;
}