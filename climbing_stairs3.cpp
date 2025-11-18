// Space Optimization
// TC - O(N)
// SC - O(1)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(int cost[], int n) {
    int prev2 = cost[0];
    int prev1 = cost[1];
    for(int i = 2; i < n; i++) {
        int curr = cost[i] + min(prev1, prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    return min(prev1, prev2);
}
int main() {
    int cost[3] = {10, 15, 20};
    int n = sizeof(cost) / sizeof(cost[0]);
    cout << solve(cost, n) << endl;
}