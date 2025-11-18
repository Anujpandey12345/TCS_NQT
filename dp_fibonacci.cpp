#include <iostream>
#include <vector>
using namespace std;


int fib(int n, vector<int> &dp) {
    //Base Condition's
    if(n <= 1) {
        return n;
    }
    //Step - 3 -> Check is this dp is on the dp Array then just return means we don't need again makinhg tree
    if(dp[n] != -1) return dp[n];
    //Step - 2; -> Store in dp Array
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}
int main() {
    int n;
    cout << "Enter the Number :: ";
    cin >> n;
    // Step1 -> Store -1 in array Dp..
    vector <int> dp(n+1);
    for(int i = 0; i <= n; i++) {
        dp[i] = -1;
    }
    cout << fib(n, dp) << endl;
    return 0;
}