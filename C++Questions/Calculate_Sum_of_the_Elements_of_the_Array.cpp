#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void reArrange(vector<int> &arr) {
        int n = arr.size();
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += arr[i];
        }
        cout << "Sum is :: " << sum << endl;
    }
};
int main () {
    vector<int> arr  = {10, 20, 50, 60};
    Solution sol;
    sol.reArrange(arr);
    for(int x : arr) cout << x << " ";
}
