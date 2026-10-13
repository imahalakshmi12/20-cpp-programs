#include <iostream>
using namespace std;

int main() {
    long long n;

    cout << "Enter a non-negative integer: ";
    if (!(cin >> n) || n < 0) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    long long temp = n;
    int digits = 0;

    do {
        digits++;
        temp /= 10;
    } while (temp > 0);

    temp = n;
    unsigned long long sum = 0;

    do {
        int digit = static_cast<int>(temp % 10);
        unsigned long long power = 1;

        for (int i = 0; i < digits; i++) {
            power *= static_cast<unsigned long long>(digit);
        }

        sum += power;
        temp /= 10;
    } while (temp > 0);

    if (sum == static_cast<unsigned long long>(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}
