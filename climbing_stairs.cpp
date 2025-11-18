#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(int cost[], int n) {
    if(n == 1) return cost[1];
    if(n == 0) return cost[0];
    return cost[n] + min(solve(cost, n-1), solve(cost, n-2));
}
int main() {
    int cost[3] = {10, 15, 20};
    int n = sizeof(cost) / sizeof(cost[0]);
    //It will be simplified more .. 
    int ans = min(solve(cost, n-1), solve(cost, n-2));
    cout << ans << endl;
    return 0;
}