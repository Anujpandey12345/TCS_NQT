// Bottom Up Approach (Tabulation method)
// Time Complexity - O(N)
// Space Complexity - O(N)

#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n;
    cout << "Enter the Number :: ";
    cin >> n;

    //Step - 1
    vector<int> dp(n+1);
    //Step - 2
    dp[1] = 1;
    dp[0] = 0;

    //Step - 3;

    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout << dp[n] << endl;
}