#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    set<string> uniqueStrings;
    string s;

    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> s;
        uniqueStrings.insert(s);
    }

    cout << "\nStrings after removing duplicates:\n";
    for (const auto &str : uniqueStrings) {
        cout << str << endl;
    }

    return 0;
}
