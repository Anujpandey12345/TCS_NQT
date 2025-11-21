// Count digits of a number. 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void reArrange(int &num) {
        int temp = num;
        int cnt = 0;
        while (temp > 0) {
            int digit = temp % 10;
            temp /= 10;
            if(digit != 0 && num % digit == 0) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
};
int main () {
    int num;
    cout << "Enter the number :: ";
    cin >> num;
    Solution n;
    n.reArrange(num);
    // cout << num << " ";
}