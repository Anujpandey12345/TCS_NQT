#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 3) {
        cout << "Array must contain at least 3 elements.";
        return 0;
    }

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, arr + n);

    cout << "3rd Smallest number: " << arr[2] << endl;
    cout << "3rd Largest number: " << arr[n - 3] << endl;

    return 0;
}
