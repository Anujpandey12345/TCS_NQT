// Maximum sum of Non- Adjacent Elements, This problem solve  using recursion so this gives you TLE
#include <bits/stdc++.h> 
#include<algorithm>
using namespace std;
int solve(int arr[], int n) {
    if(n < 0) return 0;
    if(n == 0) return arr[0];
    int include = solve(arr, n-2) + arr[n];
    int exclude = solve(arr, n-1) + 0;
    return max(include, exclude);
}
int main() {
    int arr[4] = {9, 9, 8, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = solve(arr, n-1);
    cout << ans << endl;
}