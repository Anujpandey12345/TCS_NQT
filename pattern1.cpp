// Simple Tringle 
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// #include <iostream>
// using namespace std;
// int main () {
//     int n = 5;
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
// #include <iostream>
// using namespace std;
// int main () {
//     int n = 5;
//     for(int i = 1; i <= n; i++) {
//         for(int j = i; j <= n; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



//   * * * * * * * * * 
//     * * * * * * * 
//       * * * * * 
//         * * * 
//           * 
// #include <iostream>
// using namespace std;
// int main () {
//     int n = 5;
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << "  ";
//         }
//         for(int j = i; j < n; j++) {
//             cout << "* ";
//         }
//         for(int j = i; j <= n; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     // Upper part
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j < i; j++) {
//             cout << "  ";
//         }
//         for (int j = i; j <= n; j++) {
//             cout << char('A' + j - 1) << " ";
//         }
//         for (int j = i + 1; j <= n; j++) {
//             cout << char('A' + j - 1) << " ";
//         }
//         cout << endl;
//     }

//     // Lower part
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j < n; j++) {
//             cout << "  ";
//         }
//         for (int j = 1; j <= i; j++) {
//             cout << char('A' + j - 1) << " ";
//         }
//         for (int j = 1; j < i; j++) {
//             cout << char('A' + j - 1) << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }






#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n = 5;
    int n1 = 1;

    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            cout << "   ";
        }
        for (int j = i; j <= n; j++) {
            cout << setw(3) << n1++;
        }
        for (int j = i + 1; j <= n; j++) {
            cout << setw(3) << n1++;
        }
        cout << endl;
    }

    // Lower part
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << setw(3) << n1++;
        }
        for (int j = 1; j < i; j++) {
            cout << setw(3) << n1++;
        }
        cout << endl;
    }

    return 0;
}



