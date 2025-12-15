// Second Smallest and Second Largest element in an array 


#include <bits/stdc++.h>
using namespace std;
int SecondSmallest(vector<int>&arrS){
    int n = arrS.size();
    if(n < 2) {
        return -1;
    }
    int small = INT_MAX;
    int second_small = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arrS[i] < small){
            second_small = small;
            small = arrS[i];
        }else if(arrS[i] < second_small && arrS[i] != small) {
            second_small = arrS[i];
        }
    }
    return second_small;
}
int SecondLargest(vector<int>&arrL){
    int n = arrL.size();
    if(n < 2) {
        return -1;
    }
    int large = INT_MIN;
    int second_large = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arrL[i] > large){
            second_large = large;
            large = arrL[i];
        }else if(arrL[i] > second_large && arrL[i] != large) {
            second_large = arrL[i];
        }
    }
    return second_large;
}


int main() {
    vector<int>arrS = {0, 1, 2, 3, 4, 5, 5, 6, 6};
    vector<int>arrL = {3, 5, 6, 2, 2, 5, 6, 7, 8};
    int ans1 = SecondLargest(arrL);
    int ans2 = SecondSmallest(arrS);
    cout << "Second Largest = " << ans1 << endl;
    cout << "Second Smallest = " << ans2 << endl;

    return 0;
}