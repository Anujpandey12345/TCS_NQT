#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr = {12, 32, 54, 65, 67, 78};
    int n = arr.size();
    int largest = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest){
            largest = arr[i+1];
        }
    }
    cout << "This is your Largest Number :: " << largest << endl;
}