// Find the largest number in an array
#include <bits/stdc++.h>
using namespace std;
int LargestElement(vector<int> &arr) {
    int n = arr.size();
    if(n == 0) {
        return -1; 
    }
    int ansFun = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > ansFun) {
            ansFun = arr[i];
        }
    }
    return ansFun;
}


int main() {
    vector<int> arr = {INT_MIN, INT_MAX, 0};
    int ans = LargestElement(arr);
    cout << "Largest Number is = " << ans << endl;
}







// =======================================================
// TEST CASES FOR FINDING THE LARGEST ELEMENT IN AN ARRAY
// (Each test case is explained clearly)
// =======================================================

// TC-01: Normal array with positive, negative and zero values
// {2, 5, 1, 3, 0, 99, -1}     // Expected: 99

// // TC-02: Array sorted in ascending order
// {1, 2, 3, 4, 5}            // Expected: 5

// // TC-03: Array sorted in descending order
// {10, 8, 6, 4, 2}           // Expected: 10

// // TC-04: All elements are equal
// {5, 5, 5, 5}               // Expected: 5

// // TC-05: Single element array
// {7}                        // Expected: 7

// // TC-06: Array containing only negative numbers
// {-2, -5, -1, -10}          // Expected: -1

// // TC-07: Mixed positive, negative and zero values
// {3, -1, 4, -5, 0}          // Expected: 4

// // TC-08: Array with large integer values
// {100000, 99999, 123456, 1} // Expected: 123456

// // TC-09: Array containing only zeros
// {0, 0, 0}                  // Expected: 0

// // TC-10: Array with two elements
// {9, 3}                     // Expected: 9

// // TC-11: Maximum element at the first position
// {10, 2, 3, 4}              // Expected: 10

// // TC-12: Maximum element at the last position
// {5, 4, 3, 2, 10}           // Expected: 10

// // TC-13: Maximum value appears more than once
// {2, 7, 3, 7, 4}            // Expected: 7

// // TC-14: Array with INT_MIN and INT_MAX values
// {INT_MIN, INT_MAX, 0}      // Expected: INT_MAX

// // TC-15: Array with zero and negative values only
// {-5, -2, -9, 0}            // Expected: 0

// // TC-16: Alternating positive and negative numbers
// {1, -1, 2, -2, 3, -3}      // Expected: 3

// // TC-17: Array with repeated identical elements
// {8, 8, 8, 8, 8}            // Expected: 8

// // TC-18: Random unordered array
// {13, 7, 22, 4, 19, 1}      // Expected: 22

// // TC-19: Array with extreme negative values
// {-100000, -99999, -1}      // Expected: -1

// // TC-20: Empty array (edge case – should be handled separately)
// {}                         // Expected: Handle error / no value
