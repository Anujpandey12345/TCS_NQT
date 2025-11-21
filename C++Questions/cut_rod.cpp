//  107: Cut Rod into Segments of X, Y, Z || DP Series || Recursive Solution....


#include <bits/stdc++.h>
using namespace std;
int solve(int n, int x, int y, int z) {
    if(n == 0) return 0; // Base Case..
    if(n < 0) return INT_MIN;
    int a = solve(n-x, x, y, z) + 1;
    int b = solve(n-y, x, y, z) + 1;
    int c = solve(n-z, x, y, z) + 1;
    int ans = max(a, max(b, c));
    return ans;
}
int main() {
    int n, x, y, z;
    cout << "Enter the Rod Number :- ";
    cin >> n;
    cout << "Now enter the X, Y, Z :- ";
    cin >> x >> y >> z;
    int ans = solve(n, x, y, z);
    if(ans < 0) {
        cout << 0 << endl;
    }else{
        cout << ans  << endl;
    }
    return 0;
}