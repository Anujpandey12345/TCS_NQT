// Q2. Find whether given number is Palindrome or not (555 is palindrome because when we revrse this number then number is equal to original number)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool reArrange(int num) {
        int orig = num;
        int rev = 0;
        if (num < 0) return false;
        while (num > 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }
        return orig == rev;
    }
};
int main () {
    int num;
    cout << "Enter the number :: ";
    cin >> num;
    Solution n;
    if(n.reArrange(num)) {
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
   
}