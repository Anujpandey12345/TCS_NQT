// Reverse a given array
#include <bits/stdc++.h>
using namespace std;

void ReverseArray(vector<int> &arr) {
    int n = arr.size();
    if (n == 0) return;   // empty array check

    int i = 0;
    int j = n - 1;

    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    vector<int> arr = {3, 7, 8, 9, 1, 2, 3};

    ReverseArray(arr);

    // Print reversed array
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
