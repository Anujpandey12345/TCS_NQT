// Minimum Cost for Tickets - > Recursion Problem 983 || Exponential time complexity (\(O(c^{n})\)
// #include <bits/stdc++.h>
// using namespace std;
// int solve(int n, vector<int>&days, vector<int>&costs, int index) {
//     //Base case 
//     if (index >= n) {
//         return 0;
//     }
//     int option1 = costs[0]+solve(n, days, costs, index+1);
//     int i;
//   
//     for(int i = index; i < n && days[i] < days[index]+7; i++){
// }
//     int option2 = costs[1] + solve(n, days, costs, i);

//     for(int i = index; i < n && days[i] < days[index]+30; i++){
// }
//     int option3 = costs[2] + solve(n, days, costs, i);
//     return min(option1, min(option2, option3));
// }
// int main() {
//     vector<int>days = {1,4,6,7,8,20};
//     vector<int>costs = {2,7,15};
//     int n = days.size();
//     int ans = solve(n, days, costs, 0);
//     cout << ans << endl;
//     return 0;
// }





// // Minimum Cost for Tickets - > Recursion Problem 983 + Memoizatioion TC- O(1)
// #include <bits/stdc++.h>
// using namespace std;
// int solve(int n, vector<int>&days, vector<int>&costs, int index, vector<int>& dp) {
//     //Base case 
//     if (index >= n) {
//         return 0;
//     }

//     if(dp[index] != -1) return dp[index];

//     int option1 = costs[0]+solve(n, days, costs, index+1, dp);
//     int i;
    
//     for(int i = index; i < n && days[i] < days[index]+7; i++){

//     }

//     int option2 = costs[1] + solve(n, days, costs, i, dp);
//     for(int i = index; i < n && days[i] < days[index]+30; i++){

//     }

//     int option3 = costs[2] + solve(n, days, costs, i, dp);
//     dp[index] =  min(option1, min(option2, option3));
//     return dp[index];
// }
// int main() {
//     vector<int>days = {1,4,6,7,8,20};
//     vector<int>costs = {2,7,15};
//     int n = days.size();
//     vector<int>dp(n+1, -1);
//     int ans = solve(n, days, costs, 0, dp);
//     cout << ans << endl;
//     return 0;
// }

















// Minimum Cost for Tickets - > Tabulation Method -TC- O(N)
#include <bits/stdc++.h>
using namespace std;
int solve(int n, vector<int>&days, vector<int>&costs) {
    //Base case 
    vector<int>dp(n+1, INT_MAX);
    dp[n] = 0;
    for(int k = n-1; k >= 0; k--){
        int option1 = costs[0]+ dp[k+1];
        int i;
    
        for(i = k; i < n && days[i] < days[k]+7; i++){

        }
        int option2 = costs[1] + dp[i];
        for(i = k; i < n && days[i] < days[k]+30; i++){

        }
        int option3 = costs[2] + dp[i];
        dp[k] =  min(option1, min(option2, option3));
    }
    return dp[0];
}
int main() {
    vector<int>days = {1,4,6,7,8,20};
    vector<int>costs = {2,7,15};
    int n = days.size();
    int ans = solve(n, days, costs);
    cout << ans << endl;
    return 0;
}