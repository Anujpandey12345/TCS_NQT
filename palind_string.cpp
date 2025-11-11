// Check if a string is palindrome 


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cout << "Enter the String :: " ;
    cin >> s;
    string res = s;
    string temp = "";
    // reverse(s.begin(), s.end());
    int i = 0, j = (int)s.length()-1;
    while(i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    if(res == s) {
        cout << " String is Palindrome" << endl;
    } else {
        cout << "String is Not Palindrome" << endl;
    }
}