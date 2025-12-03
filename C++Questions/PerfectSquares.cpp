// Perfect Squares Problem || DP Series -> Recursive Solution

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int solve(int n) {
//     //Base
//     if(n == 0)
//         return 0;
//     int ans = n;
//     for (int i = 1; i * i <= n; i++) {
//         int temp = i * i;
//         ans = min(ans, 1+solve(n - temp));
//     }
//     return ans;
// }

// int main() {

//     int n;
//     cout << "Enter the Number :: ";
//     cin >> n;

//     cout << solve(n) << endl;

//     return 0;
// }




// --------------------------- Recursion + Memoization --------------------------------------------------
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int solve(int n, vector<int>&dp) {
//     //Base
//     if(n == 0)
//         return 0;
//     if(dp[n] != -1) {
//         return dp[n];
//     }
//     int ans = n;
//     for (int i = 1; i * i <= n; i++) {
//         int temp = i * i;
//         ans = min(ans, 1+solve(n - temp, dp));
//     }
//     dp[n] = ans;
//     return dp[n];
// }

// int main() {

//     int n;
//     cout << "Enter the Number :: ";
//     cin >> n;
//     //Step - 1
//     vector<int>dp(n+1, -1);

//     cout << solve(n, dp) << endl;

//     return 0;
// }


// 3 . -> Tabulation method (Bottom Up)--------------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int solve(int n) {
    vector<int>dp(n+1, INT_MAX);
    //Base
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j * j <= n; j++) {
            int temp = j * j;
            if (i - temp >= 0)
                dp[i] = min(dp[i], 1+dp[i-temp]);
        }
    }
    return dp[n];
}

int main() {

    int n;
    cout << "Enter the Number :: ";
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}