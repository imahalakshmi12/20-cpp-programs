#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter an integer: ";
    if (!(cin >> n)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    if (n < 2) {
        isPrime = false;
    } else {
        for (int i = 2; i <= n / i; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
