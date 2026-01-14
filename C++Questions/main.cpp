#include <bits/stdc++.h>
using namespace std;
int  main() {
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    for (int j = 1; j <= ans; j++ ) {
        cout << j << " ";
    }
    cout << endl;
}

// 5! -> 120

#include <vector>
#include <iostream>
using namespace std;

int maxWater(vector<int> &arr) {
  	int n = arr.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          
            // calculate the amount of water
            int amount = 
                min(arr[i], arr[j]) * (j - i);
          
            // keep track of maximum amount of water
            res = max(amount, res);
        }
    }
    return res;
}

int main() {
    vector<int> arr = {2, 1, 8, 6, 4, 6, 5, 5};
    cout << maxWater(arr);
}