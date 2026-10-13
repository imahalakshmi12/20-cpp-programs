#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter an integer: ";

    if (!(cin >> n)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    unsigned long long value =
        (n < 0) ? 0ULL - static_cast<unsigned long long>(n)
                : static_cast<unsigned long long>(n);

    int sum = 0;

    do {
        sum += static_cast<int>(value % 10);
        value /= 10;
    } while (value > 0);

    cout << "Sum of digits = " << sum << endl;
    return 0;
}
