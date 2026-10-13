#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter an integer: ";

    if (!(cin >> n)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    long long reversed = 0;

    while (n != 0) {
        int digit = static_cast<int>(n % 10);

        if (reversed > (LLONG_MAX - digit) / 10 ||
            reversed < (LLONG_MIN - digit) / 10) {
            cout << "Reversed number is out of range." << endl;
            return 1;
        }

        reversed = reversed * 10 + digit;
        n /= 10;
    }

    cout << "Reversed number = " << reversed << endl;
    return 0;
}
