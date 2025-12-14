// Find the Smallest Number in the array

#include <bits/stdc++.h>
using namespace std;
int SmallestElement(vector<int>&arr) {
    int n = arr.size();
    if(arr.empty()) {
    cout << "Array is empty";
    return -1;
    }

    int ansFun = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < ansFun){
            ansFun = arr[i];
        }
    }
    return ansFun;
}
int main() {
    vector<int> arr = {100000, 99999, 123456, 1};
    int ans = SmallestElement(arr);
    cout << "Smallest Number is = " << ans << endl;
}




//  These are the some test cases.........................
// Test Case 1: Normal array
// """{2, 5, 1, 3, 0, 99, -1}"""

// Test Case 2: Ascending order
// {1, 2, 3, 4, 5}

// Test Case 3: Descending order
// {10, 8, 6, 4, 2}

// Test Case 4: All elements same
// {5, 5, 5, 5}

// Test Case 5: Single element
// {7}

// // Test Case 6: All negative numbers
// {-2, -5, -1, -10}

// // Test Case 7: Mixed positive & negative
// {3, -1, 4, -5, 0}

// // Test Case 8: Large numbers
// {100000, 99999, 123456, 1}

// // Test Case 9: Only zeros
// {0, 0, 0}

// // Test Case 10: Two elements
// {9, 3}

// // Test Case 11: Minimum at first position
// {-5, 2, 3, 4}

// // Test Case 12: Minimum at last position
// {5, 4, 3, 2, -1}

// // Test Case 13: Duplicate minimum values
// {2, 1, 3, 1, 4}

// // Test Case 14: Very large & very small integers
// {INT_MAX, INT_MIN, 0}

// // Test Case 15: Empty array (edge case)
// {}
