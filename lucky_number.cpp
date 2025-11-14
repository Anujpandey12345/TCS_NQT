#include <iostream>
using namespace std;

// Function to check prime
bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i <= n*0.5; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int prime_sum = 0, composite_sum = 0;

    for(int i = 2; i <= n; i++) {
        if(isPrime(i)) {
            prime_sum += i;
        } else {
            composite_sum += i;
        }
    }

    int lucky = prime_sum - composite_sum;

    cout << "Sum of Prime Numbers = " << prime_sum << endl;
    cout << "Sum of Composite Numbers = " << composite_sum << endl;
    cout << "Lucky Number = " << lucky << endl;

    return 0;
}
