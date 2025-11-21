// Q3. Factorial of a number.
// Q2. Find whether given number is Palindrome or not (555 is palindrome because when we revrse this number then number is equal to original number)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for(int i = 2; i <= num*0.5; i++) {
            if(num % i == 0) {
                return false;
            }
        }
        return true;
    }
};
int main () {
    int num;
    cout << "Enter the number :: ";
    cin >> num;
    Solution n;
    bool result = n.isPrime(num);
    if(result) {
        cout << num << " is Prime number" << endl;
    }
    else {
        cout << num << " is not Prime number " << endl;
    }   
}