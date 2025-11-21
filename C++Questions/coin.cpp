#include <iostream>
#include <algorithm>
#include <climits> 
using namespace std;
int SolveRec(int coin[], int x, int n){
    if(x == 0) return 0;
    if(x < 0) return INT_MAX;
    int mini = INT_MAX;
    for(int i =0; i < n; i++) {
        int ans = SolveRec(coin, x - coin[i], n);
        if(ans != INT_MAX){
            mini = min(mini, 1+ans);
        }
    }
    return mini;
}
int main() {
    int coin[5] = {1, 2, 5, 10, 1};
    int n = sizeof(coin)/sizeof(coin[0]);
    int x = 11;
    int ans = SolveRec(coin, x, n);
    if(ans == INT_MAX) cout << -1 << endl;
    cout << ans << endl;
    return 0;
}
