// Recursive Solution ( 0/1 KnapSack Problem || learn 2-D DP)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int>&wet, vector<int>&val, int index, int W){
    //Base Condition
    if(index == 0) {
        if(wet[0] <= W){
            return val[0];
        }else{
            return 0;
        }
    }
    int include = 0;
    if(wet[index] <= W){
        include = val[index] + solve(wet, val, index-1, W - wet[index]);
    }
    int exclude = 0 + solve(wet, val, index-1, W);
    int ans = max(exclude, include);
    return ans;

}
int main () {
    vector<int> wet  = {4, 5, 1};
    vector<int> val = {1, 2, 3};
    int W = 4;
    int index  = wet.size();
    int ans = solve(wet, val, index-1, W);
    cout << ans << endl;
    
}
