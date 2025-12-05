// // Largest Square area in Matrix || DP Series ->>>>>>   Recursion Solution 
// #include <bits/stdc++.h>
// using namespace std;
// int solve(vector<vector<int>> matrix, int i, int j, int &maxi){
//     int n = matrix.size();
//     int m = matrix[0].size();
//     //Base Condition 
//     if(i >= n || j >= m){
//         return 0;
//     }
//     int right = solve(matrix, i, j+1, maxi);
//     int diagonal = solve(matrix, i+1, j+1, maxi);
//     int down = solve(matrix, i+1, j, maxi);
//     if(matrix[i][j] == 1){
//         int ans = 1 + min(right, min(diagonal, down));
//         maxi = max(maxi, ans);
//         return ans;
//     }else{
//         return 0;
//     }

// }

// int main() {

//     vector<vector<int>> matrix = {
//         {0, 1, 1, 0, 1},
//         {1, 1, 0, 1, 0},
//         {0, 1, 1, 1, 0},
//         {1, 1, 1, 1, 0},
//         {1, 1, 1, 1, 1},
//         {0, 0, 0, 0, 0}
//     };
//     int maxi = 0;
//     solve(matrix, 0, 0, maxi);
//     cout << maxi << endl;
// }




// // Largest Square area in Matrix || DP Series ->>>>>>   Recursion Solution  + Memoization(Top-Down Approach)
// #include <bits/stdc++.h>
// using namespace std;
// int solve(vector<vector<int>> &matrix, int i, int j, int &maxi, vector<vector<int>> &dp){
//     int n = matrix.size();
//     int m = matrix[0].size();
//     //Base Condition 
//     if(i >= n || j >= m){
//         return 0;
//     }
//     if(dp[i][j] != -1){
//         return dp[i][j];
//     }
//     int right = solve(matrix, i, j+1, maxi, dp);
//     int diagonal = solve(matrix, i+1, j+1, maxi, dp);
//     int down = solve(matrix, i+1, j, maxi, dp);
//     if(matrix[i][j] == 1){
//         dp[i][j] = 1 + min(right, min(diagonal, down));
//         maxi = max(maxi, dp[i][j]);
//         return dp[i][j];
//     }else{
//         return dp[i][j] = 0;
//     }
// }

// int main() {

//     vector<vector<int>> matrix = {
//         {0, 1, 1, 0, 1},
//         {1, 1, 0, 1, 0},
//         {0, 1, 1, 1, 0},
//         {1, 1, 1, 1, 0},
//         {1, 1, 1, 1, 1},
//         {0, 0, 0, 0, 0}
//     };
//     int n = matrix.size();
//     int m = matrix[0].size();
//     int maxi = 0;
//     vector<vector<int>> dp(n, vector<int>(m, -1));
//     solve(matrix, 0, 0, maxi, dp);
//     cout << maxi << endl;
// }












// // Largest Square area in Matrix || DP Series ->>>>>>   Tabulation method(BottomUp Approach)
// #include <bits/stdc++.h>
// using namespace std;
// int solve(vector<vector<int>> &matrix, int &maxi){
//     int row = matrix.size();
//     int col = matrix[0].size();
//     vector<vector<int>> dp(row+1, vector<int>(col+1, 0));
//     for(int i = row-1; i >= 0; i--) {
//         for(int j = col-1; j >= 0; j--) {
//             int right = dp[i][j+1];
//             int diagonal = dp[i+1][j+1];
//             int down = dp[i+1][j];
//             if(matrix[i][j] == 1){
//                 dp[i][j] = 1 + min(right, min(diagonal, down));
//                 maxi = max(maxi, dp[i][j]);
//             }else{
//                 dp[i][j] = 0;
//             }
//         }
//     }
//     return dp[0][0];
// }

// int main() {

//     vector<vector<int>> matrix = {
//         {0, 1, 1, 0, 1},
//         {1, 1, 0, 1, 0},
//         {0, 1, 1, 1, 0},
//         {1, 1, 1, 1, 0},
//         {1, 1, 1, 1, 1},
//         {0, 0, 0, 0, 0}
//     };
    
//     int maxi = 0;
//     solve(matrix, maxi);
//     cout << maxi << endl;
// }





// Largest Square area in Matrix || DP Series ->>>>>>   SpaceOptimization
#include <bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> &matrix, int &maxi){
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int>curr(col+1, 0);
    vector<int>next(col+1, 0);

    for(int i = row-1; i >= 0; i--) {
        for(int j = col-1; j >= 0; j--) {
            int right = curr[j+1];
            int diagonal = next[j+1];
            int down = next[j];
            if(matrix[i][j] == 1){
                curr[j] = 1 + min(right, min(diagonal, down));
                maxi = max(maxi, curr[j]);
            }else{
                curr[j] = 0;
            }
        }
        next = curr;
    }
    return next[0];
}

int main() {

    vector<vector<int>> matrix = {
        {0, 1, 1, 0, 1},
        {1, 1, 0, 1, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0}
    };
    
    int maxi = 0;
    solve(matrix, maxi);
    cout << maxi << endl;
}