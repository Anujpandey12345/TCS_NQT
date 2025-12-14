// Count the frequency of each element in an array


#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {9, 9, 10, 11, 7, 2, 3, 4, 4, 4};
    int n = arr.size();
    unordered_map<int, int> freq;
    for(int x : arr){
        freq[x]++;
    }
    for(auto it : freq){
        cout << it.first <<  " -> " << it.second << endl;
    }
    // cout << endl;
    return 0;
}