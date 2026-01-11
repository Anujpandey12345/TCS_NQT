// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n = 6;
//     int arr[6] = {3, 1, 2, 9, 7, 8};
//     int ans = arr[0];
//     for (int i = 0; i < n; i++) {
//         if(arr[i] > ans) {
//             ans = arr[i];
//         }
//     }
//     cout << ans << endl;

// }



// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n = 6;
//     int arr[6] = {3, 0, 2, 0, 7, 8};
//     int j = 0;
//     for (int i = 0; i < n; i++) {
//         if(arr[i] != 0){
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

// }





// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n = 10;
//     int arr[10] = {3, 1, 2, 9, 7, 8, 76, 65 , 78, 9098};
//     int i = 0, j = n - 1;
//     while(i <= j){
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

// }



// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5};
//     int n = arr.size();
//     map<int, int> ans;
//     for (auto i : arr){
//         ans[i]++;
//     }
//     for(auto i : ans){
//         cout << i.first <<"->" << i.second << endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<int> arr = {1, 2, 4, 5};
//     int n = arr.size();
//     int num = 1;
//     for (int i = 0; i < n; i++) {
//         if(arr[i] == num && arr[i] >= 1) {
//             num++;
//         }
//     }
//     cout << "Missing number is " << num << endl;
// }





#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {2, 1};
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i-1] > arr[i]){
            cout << "False" << endl;
            return 0;
        }
    }
    cout << "True" << endl;
}