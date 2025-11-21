// 108: Count derangements || DP Series -- > Recursion Solution
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int solve(int n) {
    //Base Condition's
    if(n == 1) return 0;
    if(n == 2) return 1;
    int ans = ( ((n-1)%MOD) * ((solve(n-1)%MOD) + (solve(n-2)%MOD) )%MOD );
    return ans;
}
int main() {
    int n;
    cout << "Enter the Number :: ";
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}